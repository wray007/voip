#ifndef LINPHONE_VIDEO_POLICY_H_HEADER_INCLUDED_AA046D1F
#define LINPHONE_VIDEO_POLICY_H_HEADER_INCLUDED_AA046D1F

namespace linphone {
namespace core {

// Class describing policy regarding video streams establishments.
class VideoPolicy {
  public:
    // Whether video shall be automatically proposed for outgoing calls.
    void SetAutomaticallyInitiate(bool value);

    bool IsAutomaticallyInitiate();

    // Whether video shall be automatically accepted for incoming calls.
    void SetAutomaticallyAccept(bool value);

    bool IsAutomaticallyAccept();

  private:
    VideoPolicy();

    VideoPolicy(bool automatically_initiate, bool automatically_accept);

    bool automatically_initiate_;

    bool automatically_accept_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_VIDEO_POLICY_H_HEADER_INCLUDED_AA046D1F */
