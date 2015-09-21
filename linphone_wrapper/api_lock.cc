#include "linphone/api_lock.h"

linphone::core::ApiLock::ApiLock(const std::string& func) {
}

linphone::core::ApiLock::~ApiLock() {
}

linphone::core::GlobalApiLock::GlobalApiLock() {
}

linphone::core::GlobalApiLock::~GlobalApiLock() {
}

void linphone::core::GlobalApiLock::Lock(const std::string& func) {
}

void linphone::core::GlobalApiLock::Unlock(const std::string& func) {
}

void linphone::core::GlobalApiLock::RegisterLocking(const std::string& func) {
}

void linphone::core::GlobalApiLock::RegisterLocked(const std::string func) {
}

void linphone::core::GlobalApiLock::UnregisterLocked(const std::string& func) {
}

GlobalApiLock* linphone::core::GlobalApiLock::Instance() {
}

std::mutex linphone::core::GlobalApiLock::instance_mutex_;

GlobalApiLock *linphone::core::GlobalApiLock::instance_ = NULL;

