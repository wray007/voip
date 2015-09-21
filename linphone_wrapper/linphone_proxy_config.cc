#include "linphone/linphone_proxy_config.h"

void linphone::core::LinphoneProxyConfig::Edit() {
}

void linphone::core::LinphoneProxyConfig::Done() {
}

void linphone::core::LinphoneProxyConfig::SetIdentity(const std::string& display_name, const std::string& user_name, const std::string& domain) {
}

std::string linphone::core::LinphoneProxyConfig::GetIdentity() {
}

void linphone::core::LinphoneProxyConfig::SetServerAddr(const std::string& value) {
}

std::string linphone::core::LinphoneProxyConfig::GetServerAddr() {
}

Reason linphone::core::LinphoneProxyConfig::GetError() {
}

void linphone::core::LinphoneProxyConfig::SetRegisterEnabled(bool enabled) {
}

Boolean linphone::core::LinphoneProxyConfig::IsRegisterEnabled() {
}

std::string linphone::core::LinphoneProxyConfig::NormalizePhoneNumber(const std::string& phone_number) {
}

void linphone::core::LinphoneProxyConfig::SetDialPrefix(const std::string& value) {
}

std::string linphone::core::LinphoneProxyConfig::GetDialPrefix() {
}

void linphone::core::LinphoneProxyConfig::SetDialEscapePlus(bool value) {
}

bool linphone::core::LinphoneProxyConfig::IsDialEscapePlus() {
}

std::string linphone::core::LinphoneProxyConfig::GetAddr() {
}

std::string linphone::core::LinphoneProxyConfig::GetDomain() {
}

bool linphone::core::LinphoneProxyConfig::IsRegistered() {
}

void linphone::core::LinphoneProxyConfig::SetRoute() {
}

std::string linphone::core::LinphoneProxyConfig::GetRoute() {
}

void linphone::core::LinphoneProxyConfig::SetPublishEnabled(bool value) {
}

bool linphone::core::LinphoneProxyConfig::IsPublishEnabled() {
}

RegistrationState linphone::core::LinphoneProxyConfig::GetRegistrationState() {
}

void linphone::core::LinphoneProxyConfig::SetExpires(int value) {
}

int linphone::core::LinphoneProxyConfig::GetExpires() {
}

void linphone::core::LinphoneProxyConfig::SetContactParameters(const std::string& value) {
}

std::string linphone::core::LinphoneProxyConfig::GetContactParameters() {
}

int linphone::core::LinphoneProxyConfig::LookupCCCFromIso(const std::string& iso) {
}

int linphone::core::LinphoneProxyConfig::LookupCCCFromE164(const std::string& e164) {
}

void linphone::core::LinphoneProxyConfig::SetContactUriParameters(const std::string& value) {
}

std::string linphone::core::LinphoneProxyConfig::GetContactUriParameters() {
}

void linphone::core::LinphoneProxyConfig::SetAVPFEnabled(bool value) {
}

bool linphone::core::LinphoneProxyConfig::IsAVPFEnabled() {
}

linphone::core::LinphoneProxyConfig::LinphoneProxyConfig() {
}

linphone::core::LinphoneProxyConfig::LinphoneProxyConfig(::LinphoneProxyConfig* proxy_config) {
}

linphone::core::LinphoneProxyConfig::~LinphoneProxyConfig() {
}

