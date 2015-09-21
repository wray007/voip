#include "linphone/linphone_chat_message.h"

std::string linphone::core::LinphoneChatMessage::GetText() {
}

LinphoneAddress* linphone::core::LinphoneChatMessage::GerPeerAddress() {
}

LinphoneAddress* linphone::core::LinphoneChatMessage::From() {
}

std::string linphone::core::LinphoneChatMessage::ExternalBodyUrl() {
}

int64 linphone::core::LinphoneChatMessage::GetSentTime() {
}

LinphoneChatMessageState linphone::core::LinphoneChatMessage::GetState() {
}

bool linphone::core::LinphoneChatMessage::IsOutgoing() {
}

bool linphone::core::LinphoneChatMessage::IsRead() {
}

std::string linphone::core::LinphoneChatMessage::GetFileTransferName() {
}

std::string linphone::core::LinphoneChatMessage::GetFileTransferFilePath() {
}

void linphone::core::LinphoneChatMessage::SetAppData(const std::string& data) {
}

std::string linphone::core::LinphoneChatMessage::GetAppData() {
}

void linphone::core::LinphoneChatMessage::StartFileDownload(LinphoneChatMessageListener* listener, const std::string& file_path) {
}

linphone::core::LinphoneChatMessage::LinphoneChatMessage(::LinphoneChatMessage* cm) {
}

linphone::core::LinphoneChatMessage::~LinphoneChatMessage() {
}

