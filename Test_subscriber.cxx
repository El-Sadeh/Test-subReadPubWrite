
#include <algorithm>
#include <iostream>

#include <dds/sub/ddssub.hpp>
#include <dds/pub/ddspub.hpp> //required to publish
#include <dds/core/ddscore.hpp>
// Or simply include <dds/dds.hpp> 

#include "Test.hpp"

class ToSubReaderListener : public dds::sub::NoOpDataReaderListener<ToSub> {
  public:

    ToSubReaderListener() : count_ (0)
    {
    }

    void on_data_available(dds::sub::DataReader<ToSub>& reader)
    {
        // Take all samples
        dds::sub::LoanedSamples<ToSub> samples = reader.take();

        for ( dds::sub::LoanedSamples<ToSub>::iterator sample_it = samples.begin();
        sample_it != samples.end(); sample_it++) {

            if (sample_it->info().valid()){
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

void subscriber_main(int domain_id, int sample_count)
{
    // Create a DomainParticipant with default Qos
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic -- and automatically register the type
    dds::topic::Topic<ToSub> topic(participant, "Example ToSub");

    // Create a DataReader with default Qos (Subscriber created in-line)
    ToSubReaderListener listener;
    dds::sub::DataReader<ToSub> reader(
        dds::sub::Subscriber(participant),
        topic,
        dds::core::QosProvider::Default().datareader_qos(),
        &listener,
        dds::core::status::StatusMask::data_available());

	//*************************** data writer ******************************
//now create data writer
	// Create a Topic -- and automatically register the type
	dds::topic::Topic<FromSub> topicName(participant, "Example FromSub");

	// Create a DataWriter with default Qos (Publisher created in-line)
	dds::pub::DataWriter<FromSub> writer(dds::pub::Publisher(participant), topicName);

	FromSub sample; // for the writing part

	//listener loop
    while (listener.count() < sample_count || sample_count == 0) {
       // std::cout << "FromSub subscriber sleeping for 4 sec..." << std::endl;


		//******* start of writing code ******
		if ((sample_count % 2) == 0)
			sample.coolness(true);
		else
			sample.coolness(false);

		std::cout << "Writing ToSub, count " << sample_count << std::endl;
		writer.write(sample);
		//************** end writing code

        rti::util::sleep(dds::core::Duration(1));
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
        subscriber_main(domain_id, sample_count);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in subscriber_main(): " << ex.what() << std::endl;
        return -1;
    }

    // RTI Connext provides a finalize_participant_factory() method
    // if you want to release memory used by the participant factory singleton.
    // Uncomment the following line to release the singleton:
    //
    // dds::domain::DomainParticipant::finalize_participant_factory();

    return 0;
}

