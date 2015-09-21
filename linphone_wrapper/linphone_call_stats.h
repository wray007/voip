#ifndef LINPHONE_LINPHONE_CALL_STATS_H_HEADER_INCLUDED_AA043219
#define LINPHONE_LINPHONE_CALL_STATS_H_HEADER_INCLUDED_AA043219
#include "linphone/enum.h"

namespace linphone {
namespace core {

// Object representing the statistics of a call.
// To get the statistics of a call use the LinphoneCall::GetAudioStats()
// method.
// It gives the call statistics at the specific time it is asked for.
// So to have updated statistics you need to get the statistics from the call
// again.
class LinphoneCallStats {
  public:
    // Gets the media type (audio or video).
    MediaType GetMediaType();

    // Gets the state of the ICE process.
    IceState GetIceState();

    // Returns the download bandwidth in kbits/s.
    float GetDownloadBandwidth();

    // Returns the upload bandwidth in kbits/s.
    float GetUploadBandwidth();

    // Returns the local loss rate since last emitted RTCP report.
    float GetSenderLossRate();

    // Returns the remote loss rate from the last received RTCP report.
    float GetReceiverLossRate();

    // Returns the local interarrival jitter.
    float GetSenderInterarrivalJitter();

    // Returns the remote reported interarrival jitter.
    float GetReceiverInterarrivalJitter();

    // Returns the round trip delay in seconds.  -1 if the 
    // information is not available.
    float GetRoundTripDelay();

    // Returns the cumulative number of late packets.
    int64 GetLatePacketsCumulativeNumber();

    // Returns the jitter buffer size in milliseconds.
    float GetJitterBufferSize();

    // Returns the local loss rate. Unlike GetSenderLossRate() that returns 
    // this loss rate "since last emitted RTCP report", the value returned 
    // here is updated every second.
    float GetLocalLossRate();

    // Returns the local late packets rate. The value returned here
    // is updated every second.
    float GetLocalLateRate();

  private:
    LinphonCallStats(::LinphoneCall* call, MediaType media_type);

    LinponeCallStats(::LinphoneCallStats* call_stats);

    ~LinphoneCallStats();

    float GetSenderLossRate(::LinphoneCallStats* stats);

    float GetReceiverLossRate(::LinphoneCallStats* stats);

    float GetSenderInterarrivalJitter(::LinphoneCallStats* stats);

    float GetReceiverInterarrivalJitter(::LinphoneCallStats* stats);

    int64 GetLatePacketsCumulativeNumber(::LinphoneCallStats* stats);

    ::LinphoneCall* call_;

    float download_bandwidth_;

    float upload_bandwidth_;

    float sender_loss_rate_;

    float receiver_loss_rate_;

    float sender_interarrival_jitter_;

    float receiver_interarrival_jitter_;

    float round_trip_delay_;

    int64 cumulative_late_packets_;

    float jitter_buffer_size_;

    float local_loss_rate_;

    float local_late_rate_;

    MediaType media_type_;

    IceState ice_state_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CALL_STATS_H_HEADER_INCLUDED_AA043219 */
