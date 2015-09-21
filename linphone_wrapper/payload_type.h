#ifndef LINPHONE_PAYLOAD_TYPE_H_HEADER_INCLUDED_AA044B09
#define LINPHONE_PAYLOAD_TYPE_H_HEADER_INCLUDED_AA044B09

namespace linphone {
namespace core {

// Object representing a media payload type.
class PayloadType {
  public:
    // Gets the MIME type of the payload type.
    std::string GetMimeType();

    // Gets the clock rate of the payload type.
    int GetClockRate();

  private:
    PayloadType(::PayloadType* payload);

    ~PayloadType();

    ::PayloadType* payload_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_PAYLOAD_TYPE_H_HEADER_INCLUDED_AA044B09 */
