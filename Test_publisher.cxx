
#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <dds/sub/ddssub.hpp>
#include <rti/util/util.hpp> // for sleep()
#include <dds/core/ddscore.hpp>

#include "Test.hpp"


class FromSubReaderListener : public dds::sub::NoOpDataReaderListener<FromSub> {
public:

	FromSubReaderListener() : count_(0)
	{
	}

	void on_data_available(dds::sub::DataReader<FromSub>& reader)
	{
		// Take all samples
		dds::sub::LoanedSamples<FromSub> samples = reader.take();

		for (dds::sub::LoanedSamples<FromSub>::iterator sample_it = samples.begin();
			sample_it != samples.end(); sample_it++) {

			if (sample_it->info().valid()) {
				count_++;
				std::cout << sample_it->data() << std::endl;
			}
		}
	}

	int count() const
	{
		return count_;
	}

private:
	int count_;
};

void publisher_main(int domain_id, int sample_count)
{
    // Create a DomainParticipant with default Qos
    dds::domain::DomainParticipant participant (domain_id);

    // Create a Topic -- and automatically register the type
    dds::topic::Topic<ToSub> topic (participant, "Example ToSub");

    // Create a DataWriter with default Qos (Publisher created in-line)
    dds::pub::DataWriter<ToSub> writer(dds::pub::Publisher(participant), topic);

	//*************************** Set up a data reader ******************************
//now create data reader
	// Create a Topic -- and automatically register the type
	dds::topic::Topic<FromSub> topicName(participant, "Example FromSub");


	// Create a DataReader with default Qos (Subscriber created in-line)
	FromSubReaderListener listener;

	dds::sub::DataReader<FromSub> reader(
		dds::sub::Subscriber(participant),
		topicName,
		dds::core::QosProvider::Default().datareader_qos(),
		&listener,
		dds::core::status::StatusMask::data_available());
	//**************************** finished setting up *******************
	ToSub sample;
	int count = 0;
	while (listener.count() < sample_count || sample_count == 0) {
		//std::cout << "ToSub subscriber sleeping for 4 sec..." << std::endl;
		count++;
		sample.counter(count);
		std::cout << "Writing ToSub, count " << count << std::endl;
		writer.write(sample);

		rti::util::sleep(dds::core::Duration(4));
	}

	// Unset the listener to allow the reader destruction
	// (rti::core::ListenerBinder can do this automatically)
	reader.listener(NULL, dds::core::status::StatusMask::none());




}

int main(int argc, char *argv[])
{

    int domain_id = 0;
    int sample_count = 0; // infinite loop

    if (argc >= 2) {
        domain_id = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    // To turn on additional logging, include <rti/config/Logger.hpp> and
    // uncomment the following line:
    // rti::config::Logger::instance().verbosity(rti::config::Verbosity::STATUS_ALL);

    try {
        publisher_main(domain_id, sample_count);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in publisher_main(): " << ex.what() << std::endl;
        return -1;
    }

    // RTI Connext provides a finalize_participant_factory() method
    // if you want to release memory used by the participant factory singleton.
    // Uncomment the following line to release the singleton:
    //
    // dds::domain::DomainParticipant::finalize_participant_factory();

    return 0;
}

