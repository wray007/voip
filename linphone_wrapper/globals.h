#ifndef LINPHONE_GLOBALS_H_HEADER_INCLUDED_AA047FE5
#define LINPHONE_GLOBALS_H_HEADER_INCLUDED_AA047FE5
#include "linphone/linphone_core.h"
#include "linphone/linphone_core_factory.h"

namespace linphone {
namespace core {

// Singleton container used to hold global singletons
class Globals {
  public:
    LinphoneCoreFactory* GetLinphoneCoreFactory();

    LinphoneCore* GetLinphoneCore();

    CallController* GetCallController();

    // Returns the id of the background process (HeadlessHost)
    static unsigned int GetCurrentProcessId();

    static Globals* Instance();

  private:
    static Globals *instance_;

    LinphoneCoreFactory *linphone_core_factory_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_GLOBALS_H_HEADER_INCLUDED_AA047FE5 */
