#include "linphone/lp_config.h"

bool linphone::core::LpConfig::GetBool(const std::string& section, const std::string& key, bool default_value) {
}

void linphone::core::LpConfig::SetBool(const std::string& section, const std::string& key, bool value) {
}

int linphone::core::LpConfig::GetInt(const std::string& section, const std::string& key, int default_value) {
}

void linphone::core::LpConfig::SetInt(const std::string& section, const std::string& key, int value) {
}

int64 linphone::core::LpConfig::GetInt64(const std::string& section, const std::string& key, int64 default_value) {
}

void linphone::core::LpConfig::SetInt64(const std::string& section, const std::string& key, int64 value) {
}

float linphone::core::LpConfig::GetFloat(const std::string& section, const std::string& key, float default_value) {
}

void linphone::core::LpConfig::SetFloat(const std::string& section, const std::string& key, float value) {
}

std::string linphone::core::LpConfig::GetString(const std::string& section, const std::string& key, const std::string& default_value) {
}

void linphone::core::LpConfig::SetString(const std::string& section, const std::string& key, const std::string& value) {
}

std::vector<int> linphone::core::LpConfig::GetRange(const std::string& section, const std::string& key, const std::vectory<int>& default_value) {
}

void linphone::core::LpConfig::SetRange(const std::string& section, const std::string& key, const std::vectory<int>& value) {
}

linphone::core::LpConfig::LpConfig(::LpConfig* config) {
}

linphone::core::LpConfig::LpConfig(const std::string& config_path, const std::string& factory_config_path) {
}

linphone::core::LpConfig::~LpConfig() {
}

