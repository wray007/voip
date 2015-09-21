#ifndef LINPHONE_LINPHONE_CALL_PARAMS_H_HEADER_INCLUDED_AA044956
#define LINPHONE_LINPHONE_CALL_PARAMS_H_HEADER_INCLUDED_AA044956
#include "linphone/enum.h"
#include "linphone/payload_type.h"

namespace linphone {
namespace core {

// This object contains various call related parameters.
// It can be used to retrieve parameters from a currently running 
// call or modify the call's caracteristics dynamically.
class LinphoneCallParams {
  public:
    // Sets the audio bandwidth in kbits/s (0 to disable limitation).
    void SetAudioBandwidthLimit(int limit);

    void SetMediaEncryption(MediaEncryption menc);

    // Returns the MediaEncryption of the call (None, SRTP or ZRTP).
    MediaEncryption GetMediaEncryption();

    // Returns the PayloadType currently in use for the audio stream.
    PayloadType* GetUsedAudioCodec();

    // Indicates low bandwidth mode.
    // Configuring a call to low bandwidth mode will result in the core
    // to activate several settings for the call in order to ensure that
    // bitrate usage is lowered to the minimum possible.
    // Tyically, ptime (packetization time) will be increased, audio codecs's
    // output bitrate will be targetted to 20kbits/s provided that it is
    // achievable by the codec selected after SDP handshake.
    // Video is automatically disabled.
    void SetLowBandwidthEnabled(bool enable);

    bool IsLowBandwidthEnabled();

    // Enable or disable video.
    void SetVideoEnabled();

    bool IsVideoEnabled();

    // Returns the PayloadType currently in use for the video stream.
    PayloadType* GetUsedVideoCodec();

    // Returns the size of the video being sent.
    SIZE GetSentVideoSize();

    // Returns the size of the video being received.
    SIZE GetReceivedVideoSize();

    // Set the audio stream direction.
    void SetAudioDirection(MediaDirection value);

    MediaDirection GetAudioDirection();

    // Set the video stream direction.
    SetVideoDirection(MediaDirection value);

    MediaDirection GetVideoDirection();

  private:
    LinphoneCallParams(::LinphoneCallParams* params);

    ~LinphoneCallParams();

    ::LinphoneCallParams* params_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CALL_PARAMS_H_HEADER_INCLUDED_AA044956 */
