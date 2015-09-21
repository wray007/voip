#include "linphone/linphone_call_params.h"

void linphone::core::LinphoneCallParams::SetAudioBandwidthLimit(int limit) {
}

void linphone::core::LinphoneCallParams::SetMediaEncryption(MediaEncryption menc) {
}

MediaEncryption linphone::core::LinphoneCallParams::GetMediaEncryption() {
}

PayloadType* linphone::core::LinphoneCallParams::GetUsedAudioCodec() {
}

void linphone::core::LinphoneCallParams::SetLowBandwidthEnabled(bool enable) {
}

bool linphone::core::LinphoneCallParams::IsLowBandwidthEnabled() {
}

void linphone::core::LinphoneCallParams::SetVideoEnabled() {
}

bool linphone::core::LinphoneCallParams::IsVideoEnabled() {
}

PayloadType* linphone::core::LinphoneCallParams::GetUsedVideoCodec() {
}

SIZE linphone::core::LinphoneCallParams::GetSentVideoSize() {
}

SIZE linphone::core::LinphoneCallParams::GetReceivedVideoSize() {
}

void linphone::core::LinphoneCallParams::SetAudioDirection(MediaDirection value) {
}

MediaDirection linphone::core::LinphoneCallParams::GetAudioDirection() {
}

linphone::core::LinphoneCallParams::SetVideoDirection(MediaDirection value) {
}

MediaDirection linphone::core::LinphoneCallParams::GetVideoDirection() {
}

linphone::core::LinphoneCallParams::LinphoneCallParams(::LinphoneCallParams* params) {
}

linphone::core::LinphoneCallParams::~LinphoneCallParams() {
}

