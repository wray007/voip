#ifndef LINPHONE_API_LOCK_H_HEADER_INCLUDED_AA042E7E
#define LINPHONE_API_LOCK_H_HEADER_INCLUDED_AA042E7E

namespace linphone {
namespace core {

// A class that implements a mutex mechanism to protect objects accessible 
// from the API surface exposed by this DLL
class ApiLock {
  public:
    ApiLock(const std::string& func);

    ~ApiLock();

  private:
    std::string func_;

};

} // namespace core
} // namespace linphone



namespace linphone {
namespace core {

// GlobalApiLock
class GlobalApiLock {
  public:
    GlobalApiLock();

    ~GlobalApiLock();

    void Lock(const std::string& func);

    void Unlock(const std::string& func);

    void RegisterLocking(const std::string& func);

    void RegisterLocked(const std::string func);

    void UnregisterLocked(const std::string& func);

    static GlobalApiLock* Instance();

  private:
    static std::mutex instance_mutex_;

    std::recursive_mutex metex_;

    int count_;

    belle_sip_object_pool_t* pool_;

    std::list<LockInof> lock_info_list_;

    static GlobalApiLock *instance_;

};

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

struct LockInfo {
    unsigned long thread_id;

    std::string func;

    bool locked;

};

} // namespace core
} // namespace linphone

#endif /* LINPHONE_API_LOCK_H_HEADER_INCLUDED_AA042E7E */
