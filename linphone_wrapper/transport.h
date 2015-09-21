#ifndef LINPHONE_TRANSPORT_H_HEADER_INCLUDED_AA046D38
#define LINPHONE_TRANSPORT_H_HEADER_INCLUDED_AA046D38

namespace linphone {
namespace core {

// Signaling transports ports
class Transports {
  public:
    // Returns a string representation of the Transports object
    std::string ToString();

    // UDP port of the Transports object.
    void SetUDP(int value);

    int GetUDP();

    // TCP port of the Transports object.
    void SetTCP(int value);

    int GetTCP();

    // TLS port of the Transports object.
    void SetTLS(int value);

    int GetTLS();

  private:
    Transports();

    Transports(int udp, int tcp, int tls);

    ~Transports();

    int udp_;

    int tcp_;

    int tls_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_TRANSPORT_H_HEADER_INCLUDED_AA046D38 */
