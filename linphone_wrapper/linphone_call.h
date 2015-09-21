#ifndef LINPHONE_LINPHONE_CALL_H_HEADER_INCLUDED_AA04620A
#define LINPHONE_LINPHONE_CALL_H_HEADER_INCLUDED_AA04620A
#include "linphone/enum.h"
#include "linphone/linphone_address.h"
#include "linphone/linphone_call_log.h"
#include "linphone/linphone_call_params.h"
#include "linphone/linphone_call_stats.h"

namespace linphone {
namespace core {

// Object representing a call.
// Calls are create using LinphoneCore::Invite or passed to the application
// by the listener LinphoneCoreListener::CallState.
class LinphoneCall {
  public:
    // Gets the LinphoneCallState of the call (StreamRunning, IncomingReceived, 
    // OutgoingProgress, ...).
    LinphoneCallState GetCallState();

    // Gets the remote LinphoneAddress.
    LinphoneAddress* GetRemoteAddress();

    // Returns the CallDirection (Outgoing or incoming).
    CallDirection GetDirection();

    // Gets the LinphoneCallLog associated with this call.
    LinphoneCallLog* GetCallLog();

    // Gets the audio statistics associated with this call.
    LinphoneCallStats* GetAudioStats();

    // Gets the call parameters given by the remote peer.
    // This is useful for example to know if far end supports video or encryption.
    LinphoneCallParams* GetRemoteParams();

    // Gets a copy of the current local call parameters.
    LinphoneCallParams* GetCurrentParamsCopy();

    // Enable or disable the echo cancellation.
    void SetEchoCancellationEnabled(bool enable);

    bool IsEchocancellationEnabled();

    // Enable or disable the echo limiter.
    void SetEchoLimiterEnabled(bool enable);

    bool IsEchoLimiterEnabled();

    // Gets the current duration of the call in seconds.
    int GetDuration();

    // Obtain real time quality rating of the call.
    // Based on local RTP statistics and RTCP feedback, a quality rating is 
    // computed and updated during all the duration of the call.
    // This function returns its value at the time of the function call.
    // It is expected that the rating is updated at least every 5 seconds or so.
    // The rating is a floating point number comprised between 0 and 5.
    // 4-5 = good quality
    // 3-4 = average quality
    // 2-3 = poor quality
    // 1-2 = very poor quality
    // 0-1 = can't be worse, mostly unusable
    // -1 if no quality mesurement is available, for example if no active 
    // audio stream exists. Otherwise returns the quality rating.
    float GetCurrentQuality();

    // Returns call quality averaged over all the duration of the call.
    // See GetCurrentQuality for more details about quality mesurement.
    float GetAverageQuality();

    // Used by ZRTP encryption mechanism.
    // Returns SAS associated to the main stream [voice]
    std::string GetAuthenticationToken();

    // Used by ZRTP mechanism.
    // SAS can verified manually by the user or automatically using 
    // a previously shared secret.
    void SetAuthenticationTokenVerified(bool verified);

    std::string IsAuthenticationTokenVerified();

    // Tells whether the call is in conference or not.
    bool IsInConference();

    // Gets the measured sound volume played locally (received from remote).
    // It is expressed in dbm0.
    float GetPlayVolume();

    // Gets the far end's user agent description string, if available.
    std::string GetRemoteUserAgent();

    // Gets the far end's sip contact as a string, if available.
    std::string GetRemoteContact();

    void SetCameraEnabled(bool enable);

    // Tells whether video captured from the camera is sent to the remote party.
    bool IsCameraEnabled();

    // Gets the video statistics associated with this call.
    LinphoneCallStats GetVideoStats();

    // Requests remote side to send us a Video Fast Update.
    void SendVFURequest();

    // Gets the reason for a call termination (either error or normal termination)
    Reason GetReason();

  private:
    LinphoneCall(::LinphoneCall* call);

    ~LinphoneCall();

    ::LinphoneCall* call_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CALL_H_HEADER_INCLUDED_AA04620A */
