#ifndef LINPHONE_ENUM_H_HEADER_INCLUDED_AA0436DF
#define LINPHONE_ENUM_H_HEADER_INCLUDED_AA0436DF

namespace linphone {
namespace core {

// Presence statuses.
enum OnlineStatus { Offline = 0, Online, Busy, BeRigthBack, Away, OnThePhone, OutToLunch, DoNotDisturb, StatusMoved, StatusAltService, Pending };

} // namespace core
} // namespace linphone



namespace linphone {
namespace core {

// Direction of a call, either Outgoing or Incoming.
enum CallDirection { Outgoing = 0, Incoming };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Linphone core states
enum GlobalState { GlobalOff = 0, GlobalStartup, GlobalOn, GlobalShutdown };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Proxy registration states
enum RegistrationState { RegistrationNone = 0, RegistrationInProgress, RegistrationOk, RegistrationCleared, RegistrationFailed };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Types of media encryption.
enum MediaEncryption { None = 0, SRTP, ZRTP };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Policy to use to work around the issues caused by NAT
// (Network Address Translation).
enum FirewallPolicy { NoFirewall = 0, UseNatAddress, UseStun, UseIce };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Statuses of the echo canceller calibration process.
enum EcCalibratorStatus { InProgress = 0, Done, Failed, DoneNoEcho };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Linphone call states
enum LinphoneCallState { Idle = 0, IncomingReceived, OutgoingInit, OutgoingProgress, OutgoingEarlyMedia, Connected, StreamsRunning, Pausing, Paused, Resuming, Refered, Error, CallEnd, PausedByRemote, UpdatedByRemote, IncommingEarlyMedia, Updating, Released };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Represents a call status
enum LinphoneCallStatus { Success = 0, Aborted, Missed, Declined };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Levels for trace output
enum OutputTraceLevel { Debug = 0, Message, Warning, Error, None };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// The output destinations for logging
enum OutputTraceDest { None = 0, Debugger, File, TCPRemote };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Linphone chat message states
enum LinphoneChatMessageState { Idle = 0, InProgress, Delivered, NotDelivered, FileTransferError, FileTransferDone };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

enum Reason { LinphoneReasonNone = 0, 
    // No response received from remote
    LinphoneReasonNoResponse, 
    // Authentication failed due to bad credentials or resource forbidden
    LinphoneReasonForbidden, 
    // The call has been declined
    LinphoneReasonDeclined, 
    // Destination of the call was not found.
    LinphoneReasonNotFound, 
    // The call was not answered in time (request timeout)
    LinphoneReasonNotAnswered, 
    // Phone line was busy
    LinphoneReasonBusy, 
    // Unsupported content
    LinphoneReasonUnsuportedContent, 
    // Transport error: connection failures, disconnections etc...
    LinphoneReasonIOError, 
    // Do not disturb reason
    LinphoneReasonDoNotDisturb, 
    // Operation is unauthorized because missing credential
    LinphoneReasonUnauthorized, 
    // Operation like call update rejected by peer
    LinphoneReasonNotAcceptable, 
    // Operation could not be executed by server or remote client because
    // it didn't have any context for it
    LinphoneReasonNoMatch, 
    // Resource moved permanently
    LinphoneReasonMovedPermanently, 
    // Resource no longer exists
    LinphoneReasonGone, 
    // Temporarily unavailable
    LinphoneReasonTemporarilyUnavalilable, 
    // Address incomplete
    LinphoneReasonAddressIncomplete, 
    // Not implemented
    LinphoneReasonNotImplemented, 
    // Bad gateway
    LinphoneReasonBadGateway, 
    // Server timeout
    LinphoneReasonServerTimeout, 
    // Unknown reason
    LinphoneReasonUnknown };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// LinphoneTransport
enum LinphoneTransport { LinphoneTransportUDP = 0, LinphoneTransportTCP, LinphoneTransportTLS, LinphoneTransportDTLS };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// LinphoneCoreLogCollectionUploadState
enum LinphoneCoreLogCollectionUploadState { 
    // Delivery in progress
    LinphoneCoreLogCollectionUploadStateInProgress = 0, 
    // Log collection upload successfully delivered and acknowledged by
    // remote end point
    LinphoneCoreLogCollectionUploadStateDelivered, LinphoneCoreLogCollectionUploadStateNotDelivered };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Media type of the statistics (audio or video).
enum MediaType { Audio = 0, Video };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// State of the ICE processing.
enum IceState { NotActivated, Failed, InProgress, HostConnection, ReflexiveConnection, RelayConnection };

} // namespace core
} // namespace linphone

namespace linphone {
namespace core {

// Indicates for a given media the stream direction.
enum MediaDirection { Inactive = 0, SendOnly, RecvOnly, SendRecv };

} // namespace core
} // namespace linphone

#endif /* LINPHONE_ENUM_H_HEADER_INCLUDED_AA0436DF */
