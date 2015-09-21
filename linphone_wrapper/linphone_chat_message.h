#ifndef LINPHONE_LINPHONE_CHAT_MESSAGE_H_HEADER_INCLUDED_AA041A06
#define LINPHONE_LINPHONE_CHAT_MESSAGE_H_HEADER_INCLUDED_AA041A06
#include "linphone/enum.h"
#include "linphone/linphone_address.h"
#include "linphone/linphone_chat_message_listener.h"

namespace linphone {
namespace core {

// Represents a chat message shared between two users.
class LinphoneChatMessage {
  public:
    // Returns the text associated to this message.
    std::string GetText();

    // Get peer address as LinphoneAddress associated to this message.
    LinphoneAddress* GerPeerAddress();

    // Get from address as LinphoneAddress associated to this message.
    LinphoneAddress* From();

    // Linphone message can carry external body as defined by rfc2017.
    std::string ExternalBodyUrl();

    // Gets the time at which the message was sent (in seconds since 01/01/1970).
    int64 GetSentTime();

    // Gets the state of the message (Idle, InProgress,
    // Delivered or NotDelivered).
    LinphoneChatMessageState GetState();

    // Returns true if the message was outgoing, otherwise return false.
    bool IsOutgoing();

    // Returns true if the message has been read, otherwise return false.
    bool IsRead();

    // Returns the name of the file used in the file transfer if it exists
    std::string GetFileTransferName();

    // Returns the path to the file to read from or write to during
    // the file transfer.
    std::string GetFileTransferFilePath();

    // Returns the content of the appData
    void SetAppData(const std::string& data);

    std::string GetAppData();

    // Starts the download of the image in the message if exists
    void StartFileDownload(LinphoneChatMessageListener* listener, const std::string& file_path);

  private:
    LinphoneChatMessage(::LinphoneChatMessage* cm);

    ~LinphoneChatMessage();

    ::LinphoneChatMessage* message_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CHAT_MESSAGE_H_HEADER_INCLUDED_AA041A06 */
