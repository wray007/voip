#ifndef LINPHONE_LINPHONE_PROXY_CONFIG_H_HEADER_INCLUDED_AA0415AE
#define LINPHONE_LINPHONE_PROXY_CONFIG_H_HEADER_INCLUDED_AA0415AE
#include "linphone/enum.h"

namespace linphone {
namespace core {

// This object represents a proxy configuration to be used by the
// LinphoneCore object.
// Its fields mustn't be used directly in favour of the accessors methods.
// Once created and filled properly, the LinphoneProxyConfig can be
// given to LinphoneCore using LinphoneCore::AddProxyConfig.
// This will automatically triggers the registration if enabled.
// The proxy configuration are persistent to restarts because they are
// saved in the configuration file.
// As a consequence, after LinphoneCoreFactory::CreateLinphoneCore there
// might already be a default proxy that can be examined with
// LinphoneCore::GetDefaultProxyConfig.
class LinphoneProxyConfig {
  public:
    // Starts editing a proxy config.
    // Because proxy config must be consistent, app MUST call Edit before doing any
    // attempts to modify proxy config (such as identity, address and so on).
    // Once modifications are done, then the app MUST call Done to commit the
    // changes.
    void Edit();

    // Commits changes made to the proxy config.
    void Done();

    // Sets the identity for this proxy config.
    void SetIdentity(const std::string& display_name, const std::string& user_name, const std::string& domain);

    // Gets the identity associated with this proxy config.
    // Returns The identity address associated with the proxy config as a string
    std::string GetIdentity();

    // Sets the proxy address.
    // Examples of valid sip proxy are:
    //   IP address: sip:87.98.157.38
    //   IP address with port: sip:87.98.157.38:5062
    //   Hostname: sip:sip.example.net
    void SetServerAddr(const std::string& value);

    std::string GetServerAddr();

    // Get the reason why registration failed when the proxy config state
    // is LinphoneRegistrationFailed.
    // Returns The reason why registration failed for this proxy config.
    Reason GetError();

    // Enables register for this proxy config.
    // Register message is issued after call to Done.
    void SetRegisterEnabled(bool enabled);

    Boolean IsRegisterEnabled();

    // Normalizes a human readable phone number into a basic string.
    // Returns the normalized phone number
    std::string NormalizePhoneNumber(const std::string& phone_number);

    void SetDialPrefix(const std::string& value);

    std::string GetDialPrefix();

    // Sets whether Linphone should replace "+" by "00" in dialed numbers
    // passed to LinphoneCore::Invite.
    void SetDialEscapePlus(bool value);

    bool IsDialEscapePlus();

    // Gets the address.
    std::string GetAddr();

    // Gets the domain of the address.
    std::string GetDomain();

    // Returns true if this proxy config is currently registered, else returns
    // false.
    bool IsRegistered();

    // Sets a SIP route.
    // When a route is set, all outgoing calls will go the the route's
    // destination if this proxy is the default one
    // see LinphoneCore::GetDefaultProxyConfig
    void SetRoute();

    std::string GetRoute();

    // Indicates either or not PUBLISH must be issued for this LinphoneProxyConfig.
    void SetPublishEnabled(bool value);

    bool IsPublishEnabled();

    // Returns the current RegistrationState for this proxy config.
    RegistrationState GetRegistrationState();

    // Sets the registration expiration time in seconds.
    void SetExpires(int value);

    int GetExpires();

    // Sets the contact params to be sent along with the REGISTERs.
    void SetContactParameters(const std::string& value);

    std::string GetContactParameters();

    // Returns the international prefix for the given country.
    // @iso The country as ISO 3166-1 alpha-2 code
    // Returns the international prefix or -1 if not found
    int LookupCCCFromIso(const std::string& iso);

    // Returns the international prefix for the given e164 number.
    // Returns he international prefix or -1 if not found
    int LookupCCCFromE164(const std::string& e164);

    // Set optional contact parameters that will be added to the contact
    // information sent in the registration, inside the URI.
    // The main use case for this function is provide the proxy additional
    // information regarding the user agent, like for example unique identifier or
    // apple push id.
    // As an example, the contact address in the SIP register sent will look like
    // &lt;sip:joe@15.128.128.93:50421;apple-push-id=43143-DFE23F-2323-FA2232&gt;.
    void SetContactUriParameters(const std::string& value);

    std::string GetContactUriParameters();

    // Indicates whether AVPF/SAVPF is being used for calls using this proxy
    // config.
    void SetAVPFEnabled(bool value);

    bool IsAVPFEnabled();

  private:
    LinphoneProxyConfig();

    LinphoneProxyConfig(::LinphoneProxyConfig* proxy_config);

    ~LinphoneProxyConfig();

    ::LinphoneProxyConfig* proxy_config_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_PROXY_CONFIG_H_HEADER_INCLUDED_AA0415AE */
