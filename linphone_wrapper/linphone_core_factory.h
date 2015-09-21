#ifndef LINPHONE_LINPHONE_CORE_FACTORY_H_HEADER_INCLUDED_AA046511
#define LINPHONE_LINPHONE_CORE_FACTORY_H_HEADER_INCLUDED_AA046511
#include "linphone/enum.h"
#include "linphone/globals.h"
#include "linphone/linphone_address.h"
#include "linphone/linphone_auth_info.h"
#include "linphone/linphone_core.h"
#include "linphone/linphone_core_listener.h"
#include "linphone/lp_config.h"
#include "linphone/transport.h"
#include "linphone/video_policy.h"
#include "linphone/video_size.h"

namespace linphone {
namespace core {

/////////////////////////////////////////////////////////////////////////////
// 
// LinphoneCoreFactory
// 
//   Class whose role is to create instances of other classes : 
//   LinphoneCore, LpConfig, AuthInfo and LinphoneAddress.
class LinphoneCoreFactory {
    friend class Globals;

  public:
    // Creates a LinphoneCore instance.
    void CreateLinphoneCore(LinphoneCoreListener* listener);

    // Creates a LinphoneCore instance given an existing LpConfig.
    void CreateLinphoneCore(LinphoneCoreListener* listener, LpConfig* config);

    // Creates a LpConfig.
    // The |config_path| of the user configuration file that must be readable and
    // writable
    // The |factory_config_path| of the user configuration file that needs only to
    // be readable
    // Returns the LpConfig that has been created
    LpConfig* CreateLpConfig();

    // Creates a LinphoneAuthInfo with |user_name| and |user_id|
    // and |password| and |ha1| and |realm| and |domain|.
    // Returns the LinphoneAddress that has been created
    LinphoneAuthInfo* CreateAuthInfo();

    // Creates a LinphoneAddress with |user_name| and |domain| and |display_name|
    // Returns the LinphoneAddress that has been created
    LinphoneAddress* CreateLinphoneAddress();

    // Constructs a LinphoneAddress object by parsing the user supplied address,
    // given as a string.
    // Returns the LinphoneAddress that has been created or NULL if the |uri|
    // couldn't be parsed
    LinphoneAddress* CreateLinphoneAddress();

    // Creates a default Transports object (using the UDP 5060 port).
    // Returns the Transports that has been created
    Transports* CreateTransports();

    // Duplicates a Transports object with |transports|. Returns the duplicated
    // Transports
    Transports* CreateTransports(Transports* transports);

    // Creates a default VideoPolicy object (automatically initiate and accept
    // video).
    // Returns the VideoPolicy that has been created
    VideoPolicy* CreateVideoPolicy();

    // Creates a VideoPolicy object specifying the behaviour for video calls.
    // If |automatically_initiate| is true, video should be automatically
    // proposed for outgoing calls, otherwise not.
    // If |automatically_accept| is true, video should be automatically 
    // accepted for incoming calls, otherwise not.
    VideoPolicy* CreateVideoPolicy(bool automatically_initiate, bool automatically_accept);

    // Creates an unnamed VideoSize object.
    // Returns the VideoSize that has been created
    VideoSize* CreateVideoSize(int width, int height);

    // Creates a named VideoSize object.
    // Returns the VideoSize that has been created
    VideoSize* CreateVideoSize(int width, int height, const std::string& name);

    // Sets the global log level of the application.
    void SetLogLevel(OutputTraceLevel log_level);

    // Resets the log collection by removing the log files.
    void ResetLogCollection();

    // Destroys the LinphoneCore attached to this factory
    void Destroy();

  private:
    LinphoneCoreFactory();

    ~LinponeCoreFactory();

    LinphoneCore *linphone_core_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CORE_FACTORY_H_HEADER_INCLUDED_AA046511 */
