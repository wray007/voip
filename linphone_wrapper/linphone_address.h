#ifndef LINPHONE_LINPHONE_ADDRESS_H_HEADER_INCLUDED_AA045E44
#define LINPHONE_LINPHONE_ADDRESS_H_HEADER_INCLUDED_AA045E44
#include "linphone/enum.h"

namespace linphone {
namespace core {

// Object that represents a SIP address.
// It's an opaque object that represents a SIP address, i.e. the content of 
// SIP's "from" and "to" headers.
// A SIP address is made of a display name, username, domain, port and various
// URI headers(such as tags).
// It looks like "Alice &lt;sip:alice@example.net&gt;". 
// The LinphoneAddress has methods to extract and manipulate all parts of
// the address. When some part of the address (for example the username) is
// empty, 
// the accessor method return null.
// 
// Example:
// LinphoneAddress addr = 
//     LinphoneManager::Instance()->LinphoneCoreFactory()->
//       CreateLinphoneAddress("sip:alice@example.net");
// 
// or
// 
// LinphoneAddress addr = 
//     LinphoneManager::Instance()->LinphoneCoreFactory()->
//       CreateLinphoneAddress("alice", "example.net", "Alice B.");
class LinphoneAddress {
  public:
    // The human display name of the address.
    // For example for the "Alice &lt;sip:alice@example.net&gt;" URI, 
    // it will return "Alice".
    void SetDisplayName(const std::string& display_name);

    std::string GetDisplayName();

    // The username part of the address.
    // For example for the "Alice &lt;sip:alice@example.net&gt;" URI,
    // it will return "alice".
    void SetUserName(const std::string& user_name);

    std::string GetUserName();

    // The domain part of the address.
    // For example for the "Alice &lt;sip:alice@example.net&gt;" URI, 
    // it will return "example.net".
    void SetDomain(const std::string& domain);

    std::string GetDomain();

    // The port part of the address.
    void SetPort(int port);

    int GetPort();

    // The transport of the address.
    void SetTransport(LinphoneTransport transport);

    LinphoneTransport GetTransport();

    // The address scheme, normally "sip".
    std::string GetScheme();

    // Removes address's tags and uri headers so that it is displayable to the
    // user.
    void Clean();

    // Gets the string representation of the address.
    std::string AsString();

    // Gets the string representation of the URI part of the address 
    // (without the display name).
    // Returns the address without display name as a string
    std::string AsStringUriOnly();

    std::string ToString();

  private:
    LinphoneAddress(::LinphoneAddress* address);

    LinphoneAddress(const char* uri);

    ~LinphoneAddress();

    ::LinphoneAddress* address_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_ADDRESS_H_HEADER_INCLUDED_AA045E44 */
