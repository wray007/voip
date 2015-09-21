#include "linphone/linphone_core.h"

void linphone::core::LinphoneCore::SetLogLevel(OutputTraceLevel level) {
}

OutputTraceLevel linphone::core::LinphoneCore::GetLogLevel() {
}

void linphone::core::LinphoneCore::SetCPUCount(int count) {
}

int linphone::core::LinphoneCore::GetCPUCount() {
}

void linphone::core::LinphoneCore::ResetLogCollection() {
}

void linphone::core::LinphoneCore::ClearProxyConfigs() {
}

void linphone::core::LinphoneCore::AddProxyConfig(LinphoneProxyConfig* proxy_config) {
}

void linphone::core::LinphoneCore::SetDefaultProxyConfig(LinphoneProxyConfig* config) {
}

LinphoneProxyConfig* linphone::core::LinphoneCore::GetDefaultProxyConfig() {
}

void linphone::core::LinphoneCore::GetProxyConfigList(std::vector<LinphoneProxyConfig*>& config_list) {
}

void linphone::core::LinphoneCore::ClearAuthInfos() {
}

void linphone::core::LinphoneCore::AddAuthInfo(LinphoneAuthInfo* info) {
}

LinphoneAuthInfo* linphone::core::LinphoneCore::CreateAuthInfo(const std::string& user_name, const std::string& user_id, const std::string& password, const std::string& ha1, const std::string& realm, const std::string& domain) {
}

void linphone::core::LinphoneCore::GetAuthInfos(std::vector<LinphoneAuthInfo*>& infos) {
}

void linphone::core::LinphoneCore::Destroy() {
}

LinphoneAddress* linphone::core::LinphoneCore::InterpretURL(const std::string& destination) {
}

LinphoneCall* linphone::core::LinphoneCore::Invite(const std::string& destination) {
}

LinphoneCall* linphone::core::LinphoneCore::InviteAddress(LinphoneAddress* destination) {
}

LinphoneCall* linphone::core::LinphoneCore::InviteAddressWithParams(LinphoneAddress* destination, LinphoneCallParams* params) {
}

void linphone::core::LinphoneCore::TerminateCall(LinphoneCall* call) {
}

void linphone::core::LinphoneCore::DeclineCall(LinphoneCall* call, Reason reason) {
}

LinphoneCall* linphone::core::LinphoneCore::GetCurrentCall() {
}

bool linphone::core::LinphoneCore::IsInCall() {
}

bool linphone::core::LinphoneCore::IsIncomingInvitePending() {
}

void linphone::core::LinphoneCore::AcceptCall(LinphoneCall* call) {
}

void linphone::core::LinphoneCore::AcceptCallWithParams(LinphoneCall* call, LinphoneCallParams* params) {
}

viod linphone::core::LinphoneCore::DeferCallUpdate(LinphoneCall* call) {
}

void linphone::core::LinphoneCore::UpdateCall(LinphoneCall* call, LinphoneCallParams* params) {
}

LinphoneCallParams* linphone::core::LinphoneCore::CreateDefaultCallParameters() {
}

void linphone::core::LinphoneCore::GetCallLogs(std::vector<LinphoneCallLog*>& logs) {
}

void linphone::core::LinphoneCore::ClearCallLogs() {
}

void linphone::core::LinphoneCore::RemoveCallLog(LinphoneCallLog* log) {
}

void linphone::core::LinphoneCore::SetNetworkReachable(bool reachable) {
}

bool linphone::core::LinphoneCore::IsNetworkReachable() {
}

void linphone::core::LinphoneCore::SetMicGainDb(float gain) {
}

float linphone::core::LinphoneCore::GetMicGainDb() {
}

void linphone::core::LinphoneCore::SetPlaybackGainDb(float gain) {
}

float linphone::core::LinphoneCore::GetPlaybackGainDb() {
}

void linphone::core::LinphoneCore::SetPlayLevel(int level) {
}

int linphone::core::LinphoneCore::GetPlayLevel() {
}

void linphone::core::LinphoneCore::SetMicMuted(bool muted) {
}

bool linphone::core::LinphoneCore::IsMicMuted() {
}

void linphone::core::LinphoneCore::SendDTMF(char16 number) {
}

void linphone::core::LinphoneCore::PlayDTMF(char16 number, int duration) {
}

void linphone::core::LinphoneCore::StopDTMF() {
}

PayloadType* linphone::core::LinphoneCore::FindPayloadType(const std::string& mine, int clock_rate, int channels) {
}

PayloadType* linphone::core::LinphoneCore::FindPayloadType(const std::string& mine, int clock_rate) {
}

bool linphone::core::LinphoneCore::PayloadTypeEnabled(PayloadType* pt) {
}

void linphone::core::LinphoneCore::EnablePayloadType(PayloadType pt, bool enable) {
}

void linphone::core::LinphoneCore::GetAudioCodecs(std::vector<PayloadType*>& codecs) {
}

void linphone::core::LinphoneCore::SetEchoCancellationEnabled(bool enable) {
}

bool linphone::core::LinphoneCore::IsEchoCancellationEnabled() {
}

void linphone::core::LinphoneCore::StartEchoCalibration() {
}

void linphone::core::LinphoneCore::SetEchoLimiterEnabled(bool enable) {
}

bool linphone::core::LinphoneCore::IsEchoLimiterEnabled() {
}

void linphone::core::LinphoneCore::SetSipTransports(Transports port) {
}

Transports linphone::core::LinphoneCore::GetSipTransports() {
}

void linphone::core::LinphoneCore::SetIpv6Enabled(bool enable) {
}

bool linphone::core::LinphoneCore::IsIpv6Enbaled() {
}

void linphone::core::LinphoneCore::SetPresenceInfo(int minute_away, const std::string& alternative_contact, OnlineStatus status) {
}

void linphone::core::LinphoneCore::SetStunServer(const std::string& server) {
}

std::string linphone::core::LinphoneCore::GetStunServer() {
}

void linphone::core::LinphoneCore::SetFirewallPolicy(FirewallPolicy policy) {
}

FirewallPolicy linphone::core::LinphoneCore::GetFirewallPolicy() {
}

void linphone::core::LinphoneCore::SetRootCA(const std::string& path) {
}

std::string linphone::core::LinphoneCore::GetRootCA() {
}

void linphone::core::LinphoneCore::SetUploadBandwidth(int value) {
}

int linphone::core::LinphoneCore::GetUploadBandwidth() {
}

void linphone::core::LinphoneCore::SetDownloadBandwidth(int value) {
}

int linphone::core::LinphoneCore::GetDownloadBandwidth() {
}

void linphone::core::LinphoneCore::SetDownloadPTime(int ptime) {
}

int linphone::core::LinphoneCore::GetDownloadPTime() {
}

void linphone::core::LinphoneCore::SetUploadPTime(int ptime) {
}

int linphone::core::LinphoneCore::GetUploadPTime() {
}

void linphone::core::LinphoneCore::SetKeepAliveEnabled(bool enable) {
}

bool linphone::core::LinphoneCore::IsKeepAliveEnabled() {
}

void linphone::core::LinphoneCore::SetPlayFile(const std::string& path) {
}

bool linphone::core::LinphoneCore::PauseCall(LinphoneCall* call) {
}

bool linphone::core::LinphoneCore::ResumeCall(LinphoneCall* call) {
}

bool linphone::core::LinphoneCore::PauseAllCalls() {
}

bool linphone::core::LinphoneCore::IsInConference() {
}

bool linphone::core::LinphoneCore::EnterConference() {
}

void linphone::core::LinphoneCore::LeaveConference() {
}

void linphone::core::LinphoneCore::AddToConference(LinephoneCall* call) {
}

void linphone::core::LinphoneCore::AddAllToConference() {
}

void linphone::core::LinphoneCore::RemoveFromConference(LinphoneCall* call) {
}

void linphone::core::LinphoneCore::TerminateConference() {
}

int linphone::core::LinphoneCore::GetConferenceSize() {
}

void linphone::core::LinphoneCore::TerminateAllCalls() {
}

int linphone::core::LinphoneCore::GetCallsNb() {
}

LinphoneCall* linphone::core::LinphoneCore::FindCallFromUri(const std::string& uri) {
}

void linphone::core::LinphoneCore::SetMaxCalls(int max) {
}

int linphone::core::LinphoneCore::GetMaxCalls() {
}

bool linphone::core::LinphoneCore::IsMyself(const std::string& uri) {
}

bool linphone::core::LinphoneCore::IsSoundResourcesLocked() {
}

bool linphone::core::LinphoneCore::IsMediaEncryptionSupported(MediaEncryption menc) {
}

void linphone::core::LinphoneCore::SetMediaEncryption(MediaEncryption menc) {
}

MediaEncryption linphone::core::LinphoneCore::GetMediaEncryption() {
}

void linphone::core::LinphoneCore::SetMediaEncryptionMandatory(bool yesno) {
}

bool linphone::core::LinphoneCore::IsMediaEncryptionMandatory() {
}

bool linphone::core::LinphoneCore::IsTunnelAvailable() {
}

Tunnel* linphone::core::LinphoneCore::GetTunnel() {
}

void linphone::core::LinphoneCore::SetUserAgent(const std::string& name, const std::string& version) {
}

int linphone::core::LinphoneCore::GetMissedCallsCount() {
}

void linphone::core::LinphoneCore::ResetMissedCallsCount() {
}

void linphone::core::LinphoneCore::RefreshRegisters() {
}

std::string linphone::core::LinphoneCore::GetVersion() {
}

void linphone::core::LinphoneCore::SetAudioPort(int port) {
}

int linphone::core::LinphoneCore::GetAudioPort() {
}

void linphone::core::LinphoneCore::SetAudioPortRange(int min_port, int max_port) {
}

void linphone::core::LinphoneCore::SetIncomingTimeout() {
}

int linphone::core::LinphoneCore::GetIncomingTimeout() {
}

void linphone::core::LinphoneCore::SetInCallTimeout() {
}

int linphone::core::LinphoneCore::GetInCallTimeout() {
}

void linphone::core::LinphoneCore::SetPrimaryContact(const std::string& display_name, const std::string& user_name) {
}

void linphone::core::LinphoneCore::SetUseInfoForDtmf(bool use) {
}

bool linphone::core::LinphoneCore::IsUseInfoForDtmf() {
}

void linphone::core::LinphoneCore::SetUseRfc2833ForDtmf(bool use) {
}

bool linphone::core::LinphoneCore::IsUseRfc2833ForDtmf() {
}

LpConfig* linphone::core::LinphoneCore::GetConfig() {
}

bool linphone::core::LinphoneCore::IsVideoSupported() {
}

void linphone::core::LinphoneCore::SetVideoPolicy(VideoPolicy* policy) {
}

VideoPolicy* linphone::core::LinphoneCore::GetVideoPolicy() {
}

void linphone::core::LinphoneCore::GetSupportedVideoSizes(std::vector<VideoSize*>& video_sizes) {
}

std::string linphone::core::LinphoneCore::GetPreferredVideoSizeName() {
}

void linphone::core::LinphoneCore::SetPreferredVideoSize(VideoSize* video_size) {
}

void linphone::core::LinphoneCore::SetPreferredVideoSize(int width, int height) {
}

VideoSize* linphone::core::LinphoneCore::GetPreferredVideoSize() {
}

void linphone::core::LinphoneCore::SetPreferredVideoSizeByName(const std::string& size_name) {
}

void linphone::core::LinphoneCore::SetVideoDevice(const std::string& device) {
}

std::string linphone::core::LinphoneCore::GetVideoDevice() {
}

void linphone::core::LinphoneCore::GetVideoCodecs(std::vector<PayloadType*>& codecs) {
}

bool linphone::core::LinphoneCore::IsVideoEnabled() {
}

void linphone::core::LinphoneCore::EnableVideo(bool enable_capture, bool enable_display) {
}

void linphone::core::LinphoneCore::SetVideoCaptureEnabled(bool enabled) {
}

bool linphone::core::LinphoneCore::IsVideoCaptureEnabled() {
}

void linphone::core::LinphoneCore::SetVideoDisplayEnabled(bool enabled) {
}

bool linphone::core::LinphoneCore::IsVideoDisplayEnabled() {
}

void linphone::core::LinphoneCore::SetNativeVideoWindowId(int window_id) {
}

int linphone::core::LinphoneCore::GetNativeVideoWindowId() {
}

int linphone::core::LinphoneCore::GetCameraSensorRotation() {
}

void linphone::core::LinphoneCore::SetSelfViewEnabled(bool enabled) {
}

bool linphone::core::LinphoneCore::IsSelfViewEnabled() {
}

LinphoneChatRoom* linphone::core::LinphoneCore::GetChatRoom(LinphoneAddress* address) {
}

LinphoneChatRoom* linphone::core::LinphoneCore::GetChatRoomFromUri(const std::string& to) {
}

void linphone::core::LinphoneCore::SetLogCollectionUploadServerUrl(const std::string& url) {
}

void linphone::core::LinphoneCore::UploadLogCollection() {
}

void linphone::core::LinphoneCore::SetDeviceRotation(int rotation) {
}

int linphone::core::LinphoneCore::GetDeviceRotation() {
}

void linphone::core::LinphoneCore::NotifyMute(bool muted) {
}

void linphone::core::LinphoneCore::SetChatDatabasePath(const std::string& path) {
}

void linphone::core::LinphoneCore::GetChatRooms(std::vector<LinphoneChatRoom*>& rooms) {
}

void linphone::core::LinphoneCore::SetCoreListener(LinphoneCoreListener* listener) {
}

LinphoneCoreListener* linphone::core::LinphoneCore::GetCoreListener() {
}

void linphone::core::LinphoneCore::SetIterateEnabled(bool enabled) {
}

bool linphone::core::LinphoneCore::IsIterateEnabled() {
}

linphone::core::LinphoneCore::LinphoneCore(LinphoneCoreListener* core_listener) {
}

linphone::core::LinphoneCore::LinphoneCore(LinphoneCoreListener* core_listener, LpConfig* config) {
}

void linphone::core::LinphoneCore::Init() {
}

linphone::core::LinphoneCore::~LinphoneCore() {
}

OutputTraceLevel linphone::core::LinphoneCore::log_level_;

