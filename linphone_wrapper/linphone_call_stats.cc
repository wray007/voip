#include "linphone/linphone_call_stats.h"

MediaType linphone::core::LinphoneCallStats::GetMediaType() {
}

IceState linphone::core::LinphoneCallStats::GetIceState() {
}

float linphone::core::LinphoneCallStats::GetDownloadBandwidth() {
}

float linphone::core::LinphoneCallStats::GetUploadBandwidth() {
}

float linphone::core::LinphoneCallStats::GetSenderLossRate() {
}

float linphone::core::LinphoneCallStats::GetReceiverLossRate() {
}

float linphone::core::LinphoneCallStats::GetSenderInterarrivalJitter() {
}

float linphone::core::LinphoneCallStats::GetReceiverInterarrivalJitter() {
}

float linphone::core::LinphoneCallStats::GetRoundTripDelay() {
}

int64 linphone::core::LinphoneCallStats::GetLatePacketsCumulativeNumber() {
}

float linphone::core::LinphoneCallStats::GetJitterBufferSize() {
}

float linphone::core::LinphoneCallStats::GetLocalLossRate() {
}

float linphone::core::LinphoneCallStats::GetLocalLateRate() {
}

linphone::core::LinphoneCallStats::LinphonCallStats(::LinphoneCall* call, MediaType media_type) {
}

linphone::core::LinphoneCallStats::LinponeCallStats(::LinphoneCallStats* call_stats) {
}

linphone::core::LinphoneCallStats::~LinphoneCallStats() {
}

float linphone::core::LinphoneCallStats::GetSenderLossRate(::LinphoneCallStats* stats) {
}

float linphone::core::LinphoneCallStats::GetReceiverLossRate(::LinphoneCallStats* stats) {
}

float linphone::core::LinphoneCallStats::GetSenderInterarrivalJitter(::LinphoneCallStats* stats) {
}

float linphone::core::LinphoneCallStats::GetReceiverInterarrivalJitter(::LinphoneCallStats* stats) {
}

int64 linphone::core::LinphoneCallStats::GetLatePacketsCumulativeNumber(::LinphoneCallStats* stats) {
}

