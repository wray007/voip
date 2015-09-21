#include "linphone/tunnel.h"

bool linphone::core::Tunnel::IsEnabled() {
}

void linphone::core::Tunnel::Enable(bool value) {
}

void linphone::core::Tunnel::AutoDetect() {
}

void linphone::core::Tunnel::GetServers(std::vector<TunnelConfig*>& servers) {
}

void linphone::core::Tunnel::CleanServers() {
}

void linphone::core::Tunnel::SetHttpProxy(const std::string& host, int port, const std::string& user_name, const std::string& password) {
}

linphone::core::Tunnel::AddServer(const std::string& host, int port) {
}

linphone::core::Tunnel::AddServer(const std::string& host, int port, int udp_mirror_port, int round_trip_delay) {
}

linphone::core::Tunnel::Tunnel(::LinphoneTunnel* tunnel) {
}

linphone::core::Tunnel::~Tunnel() {
}

linphone::core::TunnelConfig::TunnelConfig(const std::stirng host, int port, int udp_mirror_port, int round_trip_delay) {
}

std::string linphone::core::TunnelConfig::ToString() {
}

void linphone::core::TunnelConfig::SetHost(const std::string& host) {
}

std::string linphone::core::TunnelConfig::GetHost() {
}

void linphone::core::TunnelConfig::SetPort(int port) {
}

int linphone::core::TunnelConfig::GetPort() {
}

void linphone::core::TunnelConfig::SetUDPMirrorPort(int port) {
}

int linphone::core::TunnelConfig::GetUDPMirrorPort() {
}

void linphone::core::TunnelConfig::SetRoundTripDelay(int value) {
}

int linphone::core::TunnelConfig::GetRoundTripDelay() {
}

