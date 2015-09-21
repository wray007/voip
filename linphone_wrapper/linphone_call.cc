#include "linphone/linphone_call.h"

LinphoneCallState linphone::core::LinphoneCall::GetCallState() {
}

LinphoneAddress* linphone::core::LinphoneCall::GetRemoteAddress() {
}

CallDirection linphone::core::LinphoneCall::GetDirection() {
}

LinphoneCallLog* linphone::core::LinphoneCall::GetCallLog() {
}

LinphoneCallStats* linphone::core::LinphoneCall::GetAudioStats() {
}

LinphoneCallParams* linphone::core::LinphoneCall::GetRemoteParams() {
}

LinphoneCallParams* linphone::core::LinphoneCall::GetCurrentParamsCopy() {
}

void linphone::core::LinphoneCall::SetEchoCancellationEnabled(bool enable) {
}

bool linphone::core::LinphoneCall::IsEchocancellationEnabled() {
}

void linphone::core::LinphoneCall::SetEchoLimiterEnabled(bool enable) {
}

bool linphone::core::LinphoneCall::IsEchoLimiterEnabled() {
}

int linphone::core::LinphoneCall::GetDuration() {
}

float linphone::core::LinphoneCall::GetCurrentQuality() {
}

float linphone::core::LinphoneCall::GetAverageQuality() {
}

std::string linphone::core::LinphoneCall::GetAuthenticationToken() {
}

void linphone::core::LinphoneCall::SetAuthenticationTokenVerified(bool verified) {
}

std::string linphone::core::LinphoneCall::IsAuthenticationTokenVerified() {
}

bool linphone::core::LinphoneCall::IsInConference() {
}

float linphone::core::LinphoneCall::GetPlayVolume() {
}

std::string linphone::core::LinphoneCall::GetRemoteUserAgent() {
}

std::string linphone::core::LinphoneCall::GetRemoteContact() {
}

void linphone::core::LinphoneCall::SetCameraEnabled(bool enable) {
}

bool linphone::core::LinphoneCall::IsCameraEnabled() {
}

LinphoneCallStats linphone::core::LinphoneCall::GetVideoStats() {
}

void linphone::core::LinphoneCall::SendVFURequest() {
}

Reason linphone::core::LinphoneCall::GetReason() {
}

linphone::core::LinphoneCall::LinphoneCall(::LinphoneCall* call) {
}

linphone::core::LinphoneCall::~LinphoneCall() {
}

