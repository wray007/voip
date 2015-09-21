#ifndef LINPHONE_LINPHONE_CORE_H_HEADER_INCLUDED_AA044D97
#define LINPHONE_LINPHONE_CORE_H_HEADER_INCLUDED_AA044D97
#include "linphone/enum.h"
#include "linphone/linphone_address.h"
#include "linphone/linphone_auth_info.h"
#include "linphone/linphone_call.h"
#include "linphone/linphone_call_log.h"
#include "linphone/linphone_call_params.h"
#include "linphone/linphone_chat_room.h"
#include "linphone/linphone_core_listener.h"
#include "linphone/linphone_proxy_config.h"
#include "linphone/lp_config.h"
#include "linphone/payload_type.h"
#include "linphone/transport.h"
#include "linphone/tunnel.h"
#include "linphone/video_policy.h"
#include "linphone/video_size.h"

namespace linphone {
namespace core {

// Main object created by LinphoneCoreFactory::CreateLinphoneCore.
class LinphoneCore {
  public:
    void SetLogLevel(OutputTraceLevel level);

    OutputTraceLevel GetLogLevel();

    void SetCPUCount(int count);

    int GetCPUCount();

    // Resets the log collection by removing the log files.
    static void ResetLogCollection();

    // Removes all the proxy configs from LinphoneCore.
    void ClearProxyConfigs();

    // Adds a proxy config.
    // This will start the registration of the proxy if registration is enabled.
    void AddProxyConfig(LinphoneProxyConfig* proxy_config);

    // Sets the default proxy.
    // This default proxy must be part of the list of already entered
    // LinphoneProxyConfig.
    // Toggling it as default will make LinphoneCore use this identity associated
    // with the proxy 
    // config in all incoming and outgoing calls.
    void SetDefaultProxyConfig(LinphoneProxyConfig* config);

    LinphoneProxyConfig* GetDefaultProxyConfig();

    // Gets the list of the current proxy configs.
    void GetProxyConfigList(std::vector<LinphoneProxyConfig*>& config_list);

    // Removes all the auth infos from LinphoneCore.
    void ClearAuthInfos();

    // Adds authentication information to the LinphoneCore.
    // This information will be used during all SIP transactions which requieres
    // authentication.
    void AddAuthInfo(LinphoneAuthInfo* info);

    // Creates an empty auth info.
    LinphoneAuthInfo* CreateAuthInfo(const std::string& user_name, const std::string& user_id, const std::string& password, const std::string& ha1, const std::string& realm, const std::string& domain);

    void GetAuthInfos(std::vector<LinphoneAuthInfo*>& infos);

    // Destroys LinphoneCore and free all underlying resources.
    void Destroy();

    // Builds an address according to the current proxy config. 
    // In case destination is not a sip address, the default proxy domain is
    // automatically appended.
    LinphoneAddress* InterpretURL(const std::string& destination);

    // Initiates an outgoing call given a destination as a string.
    // Internally calls InterpretURL then Invite
    LinphoneCall* Invite(const std::string& destination);

    // Initiates an outgoing call given a destination LinphoneAddress. The
    // LinphoneAddress can be
    // constructed directly using LinphoneCoreFactory::CreateLinphoneAddress or
    // InterpretURL.
    LinphoneCall* InviteAddress(LinphoneAddress* destination);

    // Initiates an outgoing call given a destination LinphoneAddress and 
    // the LinphoneCallParams to be used. The LinphoneAddress can be constructed
    // directly using LinphoneCoreFactory::CreateLinphoneAddress or InterpretURL.
    LinphoneCall* InviteAddressWithParams(LinphoneAddress* destination, LinphoneCallParams* params);

    // Terminates the given call if running.
    void TerminateCall(LinphoneCall* call);

    // Declines an incoming call with a specific reason.
    void DeclineCall(LinphoneCall* call, Reason reason);

    // Gets the current active call.If there is only one ongoing call that 
    // is in the paused state, then there is no current call.
    LinphoneCall* GetCurrentCall();

    // Tells whether there is at least one call running.
    bool IsInCall();

    // Tells whether there is an incoming call invite pending.
    // true if there is an incoming call invite pending, else returns false
    bool IsIncomingInvitePending();

    // Accepts an incoming call. Basically the app is notified of incoming calls
    // within the LinphoneCoreListener::CallState listener method. The application
    // can later respond positively to the call using this method.
    void AcceptCall(LinphoneCall* call);

    // Accepts an incoming call. Basically the app is notified of incoming calls
    // within the LinphoneCoreListener::CallState listener method. The application
    // can later respond positively to the call using this method.
    // @params The LinphoneCallParams to use for the accepted call
    void AcceptCallWithParams(LinphoneCall* call, LinphoneCallParams* params);

    // Prevent LinphoneCore from performing an automatic answer when receiving
    //call modifications from the other end of the call.
    viod DeferCallUpdate(LinphoneCall* call);

    // Updates the given call with the given params if the remote agrees.
    void UpdateCall(LinphoneCall* call, LinphoneCallParams* params);

    // Gets a default set of LinphoneCallParams.
    LinphoneCallParams* CreateDefaultCallParameters();

    // Gets the list of call logs of the LinphoneCore.
    void GetCallLogs(std::vector<LinphoneCallLog*>& logs);

    // Removes all call logs from the LinphoneCore.
    void ClearCallLogs();

    void RemoveCallLog(LinphoneCallLog* log);

    void SetNetworkReachable(bool reachable);

    bool IsNetworkReachable();

    // Sets the microphone gain in dB.
    void SetMicGainDb(float gain);

    float GetMicGainDb();

    // Allow to control play level before entering the sound card in dB.
    void SetPlaybackGainDb(float gain);

    float GetPlaybackGainDb();

    // Sets the playback level in a scale from 0 to 100.
    void SetPlayLevel(int level);

    int GetPlayLevel();

    // Mutes or unmutes the local microphone.
    void SetMicMuted(bool muted);

    bool IsMicMuted();

    // Sends a DTMF signal to the remote party if in call.
    // Playing the DTMF locally is done with PlayDTMF(char16, int).
    void SendDTMF(char16 number);

    // Plays a DTMF signal to the speaker if not in call.
    // Sending of the DTMF is done with SendDTMF(char16).
    void PlayDTMF(char16 number, int duration);

    // Stops the current playing DTMF.
    void StopDTMF();

    // Tries to return the PayloadType matching the given MIME type, 
    // clock rate and number of channels.
    PayloadType* FindPayloadType(const std::string& mine, int clock_rate, int channels);

    // Tries to return the PayloadType matching the given MIME type and clock rate.
    PayloadType* FindPayloadType(const std::string& mine, int clock_rate);

    // Tells whether a payload type is enabled or not.
    bool PayloadTypeEnabled(PayloadType* pt);

    // Enables or disables a payload type.
    // The payload type to enable/disable can be retrieved using FindPayloadType
    void EnablePayloadType(PayloadType pt, bool enable);

    void GetAudioCodecs(std::vector<PayloadType*>& codecs);

    // Enables or disables the echo cancellation.
    void SetEchoCancellationEnabled(bool enable);

    bool IsEchoCancellationEnabled();

    // Starts an echo calibration of the sound devices, in order to find adequate
    // settings for the echo canceller automatically. 
    // Status is notified to LinphoneCoreListener::EcCalibrationStatus.
    void StartEchoCalibration();

    // Enables or disables the echo limiter.
    void SetEchoLimiterEnabled(bool enable);

    bool IsEchoLimiterEnabled();

    // Sets the ports to be used for each transport (UDP, TCP, TLS).
    void SetSipTransports(Transports port);

    Transports GetSipTransports();

    // Enables or disables IPv6 support.
    void SetIpv6Enabled(bool enable);

    bool IsIpv6Enbaled();

    // Sets the user presence status.
    void SetPresenceInfo(int minute_away, const std::string& alternative_contact, OnlineStatus status);

    // Specifies a STUN server to help firewall traversal
    // such as stun.linphone.org or stun.linphone.org:3478
    void SetStunServer(const std::string& server);

    std::string GetStunServer();

    // Sets policy regarding workarounding NATs.
    void SetFirewallPolicy(FirewallPolicy policy);

    FirewallPolicy GetFirewallPolicy();

    // Sets the file or folder containing trusted root CAs.
    void SetRootCA(const std::string& path);

    std::string GetRootCA();

    // Sets maximum available upload bandwidth. 
    // This is IP bandwidth, in kbit/s (0 for infinite).
    // This information is used by liblinphone together with remote side available
    // bandwidth 
    // signaled in SDP messages to properly configure audio and video codec's
    // output bitrate.
    void SetUploadBandwidth(int value);

    int GetUploadBandwidth();

    // Maximum available download bandwidth.
    // This is IP bandwidth, in kbit/s (0 for infinite).
    // This information is used signaled to other parties during calls (within SDP
    // messages)
    // so that the remote end can have sufficient knowledge to properly configure
    // its audio 
    // and video codec output bitrate to not overflow available bandwidth.
    void SetDownloadBandwidth(int value);

    int GetDownloadBandwidth();

    // Sets audio packetization interval suggested for remote end (in
    // milliseconds).
    // A value of zero means that ptime is not specified.
    void SetDownloadPTime(int ptime);

    int GetDownloadPTime();

    // Sets audio packetization interval sent to remote end (in milliseconds).
    // A value of zero means that ptime is not specified.
    void SetUploadPTime(int ptime);

    int GetUploadPTime();

    // Enables signaling keep alive. 
    // Small UDP packet sent periodically to keep UDP NAT association.
    void SetKeepAliveEnabled(bool enable);

    bool IsKeepAliveEnabled();

    // Sets the file to be played when putting a call on hold.
    void SetPlayFile(const std::string& path);

    // Pauses a currently active call.
    // Returns true if the call has successfully been paused, otherwise false
    bool PauseCall(LinphoneCall* call);

    // Resumes a currently paused call.
    // Returns true if the call has successfully been resumed, otherwise false
    bool ResumeCall(LinphoneCall* call);

    // Pauses all the calls.
    // Returns true if the calls have successfully been paused, otherwise false
    bool PauseAllCalls();

    // Tells whether a conference is currently ongoing.
    bool IsInConference();

    // Makes the local participant to join the conference.
    // Typically, the local participant is by default always part of the conference
    // when joining an active call into a conference.
    // However, by calling LeaveConference() and EnterConference() the application
    // can decide to temporarily move out and in the local participant from the
    // conference.
    // Returns true if the conference has successfully been entered, otherwise
    // returns false
    bool EnterConference();

    // Moves the local participant out of the conference.
    // When the local participant is out of the conference, the remote 
    // participants can continue to talk normally.
    void LeaveConference();

    // Merges a call into a conference.
    // If this is the first call that enters the conference, the virtual conference
    // will be created automatically. 
    // If the local user was actively part of the call (ie not in paused state),
    // then the local user is automatically entered into the conference.
    // If the call was in paused state, then it is automatically resumed when 
    // entering into the conference.
    void AddToConference(LinephoneCall* call);

    // Adds all calls into a conference.
    // Merge all established calls (either in StreamsRunning or Paused) into a
    // conference.
    void AddAllToConference();

    // Removes a call from the conference.
    // After removing the remote participant belonging to the supplied call, 
    // the call becomes a normal call in paused state.
    // If one single remote participant is left alone together with the local user
    // in the conference after the removal, then the conference is automatically
    // transformed into a simple call in StreamsRunning state. 
    // The conference's resources are then automatically destroyed. In other words,
    // unless LeaveConference() is explicitely called, the last remote participant
    // of a conference is automatically put in a simple call in running state.
    void RemoveFromConference(LinphoneCall* call);

    // Terminates the conference and the calls associated with it.
    // All the calls that were merged to the conference are terminated, 
    // and the conference resources are destroyed.
    void TerminateConference();

    // Returns the number of participants to the conference, including the local
    // participant. Typically, after merging two calls into the conference, there
    // is total of 3 participants: the local participant (or local user), and two
    // remote participants that were the destinations of the two previously
    // establised calls.
    int GetConferenceSize();

    // Terminates all the calls.
    void TerminateAllCalls();

    // Returns the number of calls
    int GetCallsNb();

    // Searches from the list of current calls if a remote address match uri.
    LinphoneCall* FindCallFromUri(const std::string& uri);

    // Sets the maximum number of simultaneous calls the LinphoneCore can manage
    // at a time. All new call above this limit are declined with a busy answer.
    void SetMaxCalls(int max);

    int GetMaxCalls();

    // Tells whether a URI corresponds to my identity.
    bool IsMyself(const std::string& uri);

    // Use this method to check calls state and forbid proposing actions 
    // which could result in an active call.
    // Eg: don't start a new call if one is in outgoing ringing.
    // Eg: don't merge to conference either as it could result in two active
    // calls (conference and accepted call).
    bool IsSoundResourcesLocked();

    // Tells whether a media encryption scheme is supported by the 
    // LinphoneCore engine.
    // Returns true if supported, false otherwise
    bool IsMediaEncryptionSupported(MediaEncryption menc);

    // Chooses the media encryption policy to be used for RTP packets.
    void SetMediaEncryption(MediaEncryption menc);

    MediaEncryption GetMediaEncryption();

    // Defines Linphone behaviour when encryption parameters negociation fails on
    // outgoing call.
    void SetMediaEncryptionMandatory(bool yesno);

    bool IsMediaEncryptionMandatory();

    // Tells whether tunnel support is available.
    bool IsTunnelAvailable();

    // Returns the tunnel instance if available
    Tunnel* GetTunnel();

    // Sets the user agent string used in SIP messages
    void SetUserAgent(const std::string& name, const std::string& version);

    // Returns the number of missed calls since last reset
    int GetMissedCallsCount();

    // Reset the count of missed calls
    void ResetMissedCallsCount();

    // Reset the count of missed calls.
    void RefreshRegisters();

    // Returns liblinphone's version as a string
    std::string GetVersion();

    // Sets the UDP port used for audio streaming
    void SetAudioPort(int port);

    int GetAudioPort();

    // Sets the UDP port range which to randomly select the port used for audio
    // streaming
    void SetAudioPortRange(int min_port, int max_port);

    // Sets the incoming call timeout in seconds.
    // If an incoming call isn't answered for this timeout period, 
    // it is automatically declined.
    void SetIncomingTimeout();

    int GetIncomingTimeout();

    // Sets the call timeout in seconds.
    // Once this time is elapsed (ringing included), the call is automatically
    // hung up.
    void SetInCallTimeout();

    int GetInCallTimeout();

    // Set username and display name to use if no LinphoneProxyConfig is
    // configured.
    void SetPrimaryContact(const std::string& display_name, const std::string& user_name);

    // Enables/Disables the use of SIP INFO to send DTMFs.
    void SetUseInfoForDtmf(bool use);

    bool IsUseInfoForDtmf();

    // Enables/Disables the use of RFC2833 to send DTMFs.
    void SetUseRfc2833ForDtmf(bool use);

    bool IsUseRfc2833ForDtmf();

    // Gets the LpConfig object to read/write to the config file: useful if you
    // wish to extend the config file with your own sections.
    LpConfig* GetConfig();

    // Tells whether video support has been compiled.
    bool IsVideoSupported();

    // Sets the policy for video.
    void SetVideoPolicy(VideoPolicy* policy);

    VideoPolicy* GetVideoPolicy();

    // Gets the list of video sizes that are supported.
    void GetSupportedVideoSizes(std::vector<VideoSize*>& video_sizes);

    // Gets the preferred video size name
    std::string GetPreferredVideoSizeName();

    // Sets the preferred video size.
    // This applies only to the stream that is captured and sent to the remote
    // party, since we accept all standard video size on the receive path.
    void SetPreferredVideoSize(VideoSize* video_size);

    void SetPreferredVideoSize(int width, int height);

    VideoSize* GetPreferredVideoSize();

    // Sets the preferred video size by telling its name.
    // This applies only to the stream that is captured and sent to the remote
    // party, since we accept all standard video size on the receive path.
    void SetPreferredVideoSizeByName(const std::string& size_name);

    // Sets the active video device
    void SetVideoDevice(const std::string& device);

    std::string GetVideoDevice();

    // Gets the currently supported video codecs, as PayloadType elements.
    void GetVideoCodecs(std::vector<PayloadType*>& codecs);

    // Deprecated! 
    // Tells whether video is enabled or not.
    bool IsVideoEnabled();

    // Deprecated!
    // Enables video.
    // This method does not have any effect during calls. It just indicates
    // LinphoneCore to initiate future calls with video or not. The two
    // boolean parameters indicate in which direction video is enabled. 
    // Setting both to false disables video entirely.
    void EnableVideo(bool enable_capture, bool enable_display);

    // Enable or disable video capture.
    // This function does not have any effect during calls. It just indicates
    // the LinphoneCore to initiate future calls with video capture or not.
    void SetVideoCaptureEnabled(bool enabled);

    bool IsVideoCaptureEnabled();

    // Enable or disable video display.
    // This function does not have any effect during calls. It just indicates
    // the LinphoneCore to initiate future calls with video display or not.
    void SetVideoDisplayEnabled(bool enabled);

    bool IsVideoDisplayEnabled();

    // Sets the native video window id.
    void SetNativeVideoWindowId(int window_id);

    int GetNativeVideoWindowId();

    // Gets the camera sensor rotation in degrees.
    int GetCameraSensorRotation();

    // Enables or disables self view during calls.
    // Self-view refers to having local webcam image inserted in corner of
    // the video window during calls.
    void SetSelfViewEnabled(bool enabled);

    bool IsSelfViewEnabled();

    // Get a chat room whose peer is the supplied address. 
    // If it does not exist yet, it will be created.
    LinphoneChatRoom* GetChatRoom(LinphoneAddress* address);

    // Get a chat room for messaging from a sip uri like 
    // sip:joe@sip.linphone.org. If it does not exist yet, 
    // it will be created.
    LinphoneChatRoom* GetChatRoomFromUri(const std::string& to);

    // Sets the log collection upload server URL.
    void SetLogCollectionUploadServerUrl(const std::string& url);

    // Starts the upload of the log collection
    void UploadLogCollection();

    // Tells the core the device current orientation. This can be used by capture
    // filters on mobile devices to select between portrait / landscape mode and
    // to produce properly oriented images.The exact meaning of the value in
    // rotation
    // if left to each device specific implementations.
    void SetDeviceRotation(int rotation);

    int GetDeviceRotation();

    // Notifies the system that the call needs to be muted/unmuted.
    void NotifyMute(bool muted);

    // Sets the path to the database file used to store chat messages
    void SetChatDatabasePath(const std::string& path);

    // Gets the list of the created chatrooms
    void GetChatRooms(std::vector<LinphoneChatRoom*>& rooms);

    // The LinphoneCoreListener that handles the events coming from the core.
    void SetCoreListener(LinphoneCoreListener* listener);

    LinphoneCoreListener* GetCoreListener();

    // Set it to true to start the iterate, set it to false to stop it. 
    // Is disabled by default.
    void SetIterateEnabled(bool enabled);

    bool IsIterateEnabled();

  private:
    LinphoneCore(LinphoneCoreListener* core_listener);

    LinphoneCore(LinphoneCoreListener* core_listener, LpConfig* config);

    void Init();

    ~LinphoneCore();

    ::LinphoneCore* lc_;

    bool is_iterate_enabled;

    static OutputTraceLevel log_level_;

    LpConfig *config_;

    LinphoneCoreListener *listener_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LINPHONE_CORE_H_HEADER_INCLUDED_AA044D97 */
