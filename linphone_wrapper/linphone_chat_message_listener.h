#ifndef LINPHONE_LINPHONE_CHAT_MESSAGE_LISTENER_H_HEADER_INCLUDED_AA045650
#define LINPHONE_LINPHONE_CHAT_MESSAGE_LISTENER_H_HEADER_INCLUDED_AA045650
#include "linphone/enum.h"
#include "linphone/linphone_chat_message.h"

namespace linphone {
namespace core {

class LinphoneChatMessageListener {
  public:
    virtual void MessageStateChanged(LinphoneChatMessage* message, LinphoneChatMessageState state) = 0;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CHAT_MESSAGE_LISTENER_H_HEADER_INCLUDED_AA045650 */
