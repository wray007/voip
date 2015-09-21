#ifndef LINPHONE_LINPHONE_CALL_LOG_H_HEADER_INCLUDED_AA0420F5
#define LINPHONE_LINPHONE_CALL_LOG_H_HEADER_INCLUDED_AA0420F5
#include "linphone/enum.h"
#include "linphone/linphone_address.h"

namespace linphone {
namespace core {

// Call data records object
class LinphoneCallLog {
  public:
    // Returns the LinphoneAddress of the caller.
    LinphoneAddress* From();

    // Returns the LinphoneAddress of the callee.
    LinphoneAddress* To();

    //Returns the CallDirection of the call (Incoming or Outgoing).
    CallDirection Direction();

    // Returns the LinphoneCallStatus of the call (Success, Aborted, 
    // Missed or Declined).
    LinphoneCallStatus Status();

    // Returns the start date/time of the call in seconds elpsed
    // since January first 1970.
    int64 StartDate();

    // Returns the call id from signaling.
    std::string CallId();

    // Tells whether video was enabled at the end of the call.
    bool IsVideoEnabled();

  private:
    LinphoneCallLog(::LinphoneCallLog* cl);

    ~LinphoneCallLog();

    ::LinphoneCallLog* call_log_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CALL_LOG_H_HEADER_INCLUDED_AA0420F5 */
