#ifndef LINPHONE_TUNNEL_H_HEADER_INCLUDED_AA044790
#define LINPHONE_TUNNEL_H_HEADER_INCLUDED_AA044790

namespace linphone {
namespace core {

// Main object obtained by LinphoneCore::GetTunnel()
class Tunnel {
  public:
    // Tells whether the tunnel is enabled or not.
    bool IsEnabled();

    // Enable/disable the tunnel.
    void Enable(bool value);

    // Start tunnel need detection.
    void AutoDetect();

    // Gets list of TunnelConfig
    void GetServers(std::vector<TunnelConfig*>& servers);

    // Removes all tunnel server addresses previously entered with AddServer().
    void CleanServers();

    // Set an optional http proxy to go through when connecting to tunnel server.
    void SetHttpProxy(const std::string& host, int port, const std::string& user_name, const std::string& password);

    // Add a server to the tunnel configuration
    // @host Tunnel server IP address
    // @port Tunnel server TLS port, recommended value is 443
    AddServer(const std::string& host, int port);

    // Add a server to the tunnel configuration
    // @host Tunnel server IP address
    // @port Tunnel server TLS port, recommended value is 443
    // @udp_mirror_port Remote port on the tunnel server side used to
    // test UDP reachability
    // @round_trip_delay UDP packet round trip delay in ms considered as
    // acceptable. Recommended value is 1000 ms.
    AddServer(const std::string& host, int port, int udp_mirror_port, int round_trip_delay);

  private:
    Tunnel(::LinphoneTunnel* tunnel);

    ~Tunnel();

    ::LinphoneTunnel* lt_;

};

} // namespace core
} // namespace linphone



namespace linphone {
namespace core {

// Tunnel server configuration.
class TunnelConfig {
  public:
    TunnelConfig(const std::stirng host, int port, int udp_mirror_port, int round_trip_delay);

    std::string ToString();

    void SetHost(const std::string& host);

    std::string GetHost();

    void SetPort(int port);

    int GetPort();

    void SetUDPMirrorPort(int port);

    int GetUDPMirrorPort();

    void SetRoundTripDelay(int value);

    int GetRoundTripDelay();

  private:
    std::string host_;

    int port_;

    int udp_mirror_port_;

    int round_trip_delay_;

};

} // namespace core
} // namespace linphone

#endif /* LINPHONE_TUNNEL_H_HEADER_INCLUDED_AA044790 */
