#include "linphone/linphone_core_factory.h"

void linphone::core::LinphoneCoreFactory::CreateLinphoneCore(LinphoneCoreListener* listener) {
}

void linphone::core::LinphoneCoreFactory::CreateLinphoneCore(LinphoneCoreListener* listener, LpConfig* config) {
}

LpConfig* linphone::core::LinphoneCoreFactory::CreateLpConfig() {
}

LinphoneAuthInfo* linphone::core::LinphoneCoreFactory::CreateAuthInfo() {
}

LinphoneAddress* linphone::core::LinphoneCoreFactory::CreateLinphoneAddress() {
}

LinphoneAddress* linphone::core::LinphoneCoreFactory::CreateLinphoneAddress() {
}

Transports* linphone::core::LinphoneCoreFactory::CreateTransports() {
}

Transports* linphone::core::LinphoneCoreFactory::CreateTransports(Transports* transports) {
}

VideoPolicy* linphone::core::LinphoneCoreFactory::CreateVideoPolicy() {
}

VideoPolicy* linphone::core::LinphoneCoreFactory::CreateVideoPolicy(bool automatically_initiate, bool automatically_accept) {
}

VideoSize* linphone::core::LinphoneCoreFactory::CreateVideoSize(int width, int height) {
}

VideoSize* linphone::core::LinphoneCoreFactory::CreateVideoSize(int width, int height, const std::string& name) {
}

void linphone::core::LinphoneCoreFactory::SetLogLevel(OutputTraceLevel log_level) {
}

void linphone::core::LinphoneCoreFactory::ResetLogCollection() {
}

void linphone::core::LinphoneCoreFactory::Destroy() {
}

linphone::core::LinphoneCoreFactory::LinphoneCoreFactory() {
}

linphone::core::LinphoneCoreFactory::~LinponeCoreFactory() {
}

