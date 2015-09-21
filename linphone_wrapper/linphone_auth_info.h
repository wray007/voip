#ifndef LINPHONE_LINPHONE_AUTH_INFO_H_HEADER_INCLUDED_AA0445F9
#define LINPHONE_LINPHONE_AUTH_INFO_H_HEADER_INCLUDED_AA0445F9

namespace linphone {
namespace core {

// Object holding authentication information.
// In most cases, authentication information consists in an username
// and a password. Sometimes, a userid is required by the proxy, and realm 
// can be useful to discriminate different SIP domains.
// This object is instanciated using LinphoneCoreFactory::CreateAuthInfo.
// Once created and filled, a LinphoneAuthInfo must be added to the
// LinphoneCore 
// in order to become known and used automatically when needed.
// The LinphoneCore object can take the initiative to request authentication
// information when needed in the application through the 
// LinphoneCoreListener::AuthInfoRequested listener.
// The application can respond to this information request later 
// using LinphoneCore::AddAuthInfo.
// This will unblock all pending authentication transactions and 
// retry them with authentication headers.
class LinphoneAuthInfo {
  public:
    // The authentication username.
    void SetUserName(const std::string& user_name);

    std::string GetUserName();

    // The authentication userid.
    void SetUserId(const std::string& user_id);

    std::string GetUserId();

    // The authentication password.
    void SetPassword();

    std::string GetPassword();

    // The authentication realm.
    void SetRealm();

    std::string GetRealm();

    // The authentication ha1.
    void SetHa1();

    std::string GetHa1();

  private:
    LinphoneAuthInfo(const std::string& user_name, const std::string& user_id, const std::string& password, const std::string& ha1, const std::string& realm, const std::string& domain);

    LinphoneAuthInfo(::LinphoneAuthInfo* auth_info);

    ~LinphoneAuthInfo();

    ::LinphoneAuthInfo* auth_info_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_AUTH_INFO_H_HEADER_INCLUDED_AA0445F9 */
