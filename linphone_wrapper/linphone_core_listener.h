#ifndef LINPHONE_LINPHONE_CORE_LISTENER_H_HEADER_INCLUDED_AA040A77
#define LINPHONE_LINPHONE_CORE_LISTENER_H_HEADER_INCLUDED_AA040A77
#include "linphone/enum.h"
#include "linphone/linphone_call.h"
#include "linphone/linphone_call_stats.h"
#include "linphone/linphone_chat_message.h"
#include "linphone/linphone_chat_room.h"
#include "linphone/linphone_proxy_config.h"

namespace linphone {
namespace core {

// Definition of the LinphoneCoreListener interface.
class LinphoneCoreListener {
  public:
    // Callback method called when authentication information are requested.
    virtual void AuthInfoRequested(const std::string& realm, const std::string& user_name, const std::string& domain) = 0;

    // Callback method called when the application state has changed.
    virtual void GlobalState(GlobalState state, const std::string& message) = 0;

    // Callback method called when the state of a call has changed.
    virtual void CallState(LinphoneCall* call, LinphoneCallState state, const std::string& message) = 0;

    // Callback method called when the state of the registration
    // of a proxy config has changed.
    virtual void RegistrationState(LinphoneProxyConfig* config, RegistrationState state, const std::string& message) = 0;

    // Callback method called when a DTMF is received.
    virtual void DTMFReceived(LinphoneCall* call, char16 dtmf) = 0;

    // Callback method called when the echo canceller calibration finishes.
    // @status The status of the echo canceller calibration
    // @delay_ms The echo delay in milliseconds if the status is
    // EcCalibratorStatus::Done
    virtual void EcCalibrationStatus(EcCalibrationStatus status, int delay_ms) = 0;

    // Callback method called when the encryption of a call has changed.
    virtual void CallEncryptionChanged(LinphoneCall* call, bool encrypted, const std::string& authentication_token) = 0;

    // Callback method called when the statistics of a call have been updated.
    virtual void CallStatsUpdated(LinphoneCall* call, LinphoneCallStats* stats) = 0;

    virtual void MessageReceived(LinphoneChatMessage* message) = 0;

    // Callback method called when the composing status for this room has been
    // updated.
    virtual void ComposingReceived(LinphoneChatRoom* room) = 0;

    // Callback method called to notify the progression of a file transfer.
    // @message The chat message
    // @offset The number of bytes sent/received since the beginning of
    //         the file transfer
    // @total The total number of bytes to be sent/received
    virtual void FileTransferProgressIndication(LinphoneChatMessage* message, int offset, int total) = 0;

    // Callback method called when the status of the current log upload changes.
    // @state Tells the state of the upload
    // @info An error message if the upload went wrong, the url of the uploaded
    // logs
    //       if it went well, null if upload not yet finished
    virtual void LogUploadStatusChanged(LinphoneCoreLogCollectionUploadState state, const std::string& info) = 0;

    // Callback method called when the progress of the current logs upload has
    // changed.
    virtual void LogUploadProgressIndication(int offset, int total) = 0;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CORE_LISTENER_H_HEADER_INCLUDED_AA040A77 */
