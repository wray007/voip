#include "linphone/linphone_chat_room.h"

LinphoneAddress* linphone::core::LinphoneChatRoom::GetPeerAddress() {
}

void linphone::core::LinphoneChatRoom::SendMessage(LinphoneChatMessage* message, LinphoneChatMessageListener* listener) {
}

bool linphone::core::LinphoneChatRoom::IsRemoteComposing() {
}

void linphone::core::LinphoneChatRoom::Compose() {
}

LinphoneChatMessage* linphone::core::LinphoneChatRoom::CreateLinphoneChatMessage(const std::string& message) {
}

int linphone::core::LinphoneChatRoom::GetHistorySize() {
}

void linphone::core::LinphoneChatRoom::DeleteHistory() {
}

int linphone::core::LinphoneChatRoom::GetUnreadMessageCount() {
}

void linphone::core::LinphoneChatRoom::MarkAsRead() {
}

void linphone::core::LinphoneChatRoom::GetHistory(std::vector<LinphoneChatMessage*>& historys) {
}

void linphone::core::LinphoneChatRoom::DeleteMessageFromHistory(LinphoneChatMessage* message) {
}

LinphoneChatMessage* linphone::core::LinphoneChatRoom::CreateFileTransferMessage(const std::string& type, const std::string& sub_type, const std::string& name, int size, const std::string& file_path) {
}

linphone::core::LinphoneChatRoom::LinphoneChatRoom(::LinphoneChatRoom* cr) {
}

linphone::core::LinphoneChatRoom::~LinphoneChatRoom() {
}

