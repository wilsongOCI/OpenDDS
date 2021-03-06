#ifndef RTPSRELAY_PARTICIPANT_LISTENER_H_
#define RTPSRELAY_PARTICIPANT_LISTENER_H_

#include "ListenerBase.h"
#include "DomainStatisticsWriter.h"

namespace RtpsRelay {

class ParticipantListener : public ListenerBase {
public:
  explicit ParticipantListener(DomainStatisticsWriter& stats_writer);
private:
  void on_data_available(DDS::DataReader_ptr reader) override;

  DomainStatisticsWriter& stats_writer_;
};

}

#endif // RTPSRELAY_PARTICIPANT_LISTENER_H_
