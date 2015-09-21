#ifndef LINPHONE_LINPHONE_CHAT_ROOM_H_HEADER_INCLUDED_AA042688
#define LINPHONE_LINPHONE_CHAT_ROOM_H_HEADER_INCLUDED_AA042688
#include "linphone/linphone_address.h"
#include "linphone/linphone_chat_message.h"
#include "linphone/linphone_chat_message_listener.h"

namespace linphone {
namespace core {

// Represents a chat message shared between two users.
class LinphoneChatRoom {
  public:
    // Returns the LinphoneAddress associated with this ChatRoom.
    LinphoneAddress* GetPeerAddress();

    // Sends a LinphoneChatMessage using the current ChatRoom, and sets
    // the listener to be called when the massge state changes.
    void SendMessage(LinphoneChatMessage* message, LinphoneChatMessageListener* listener);

    // Tells whether the remote is currently composing a message.
    bool IsRemoteComposing();

    // Notify the destination of the chat message being composed that
    // the user is typing a new message.
    void Compose();

    LinphoneChatMessage* CreateLinphoneChatMessage(const std::string& message);

    // Returns the amount of messages associated with the peer of this chatRoom.
    int GetHistorySize();

    // Deletes all the messages associated with the peer of this chat room
    void DeleteHistory();

    // Returns the amount of unread messages associated with
    // the peer of this chatRoom.
    int GetUnreadMessageCount();

    // Marks all the messages in this conversation as read
    void MarkAsRead();

    // Gets the list of the messages in the history of this chatroom
    void GetHistory(std::vector<LinphoneChatMessage*>& historys);

    // Deletes a message from the history of the chatroom
    void DeleteMessageFromHistory(LinphoneChatMessage* message);

    // Creates a LinphoneChatMessage to transfer a file.
    // @type MIME type of the file to transfer
    // @sub_type MIME subtype of the file to transfer
    // @name Name of the file to transfer
    // @size Size in bytes of the file to transfer
    // @file_path Path to the file to transfer
    // Returns A new LinphoneChatMessage
    LinphoneChatMessage* CreateFileTransferMessage(const std::string& type, const std::string& sub_type, const std::string& name, int size, const std::string& file_path);

  private:
    LinphoneChatRoom(::LinphoneChatRoom* cr);

    ~LinphoneChatRoom();

    ::LinphoneChatRoom room_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CHAT_ROOM_H_HEADER_INCLUDED_AA042688 */
