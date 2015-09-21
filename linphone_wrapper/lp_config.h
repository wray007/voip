#ifndef LINPHONE_LP_CONFIG_H_HEADER_INCLUDED_AA0440CF
#define LINPHONE_LP_CONFIG_H_HEADER_INCLUDED_AA0440CF

namespace linphone {
namespace core {

// Object used to manipulate a configuration file.
// The format of the configuration file is a .ini like format:
// - sections are defined in []
// - each section contains a sequence of key=value pairs.
// 
// Example:
//   [sound]
//   echocanceler=1
//   playback_dev=ALSA: Default device
// 
//   [video]
//   enabled=1
class LpConfig {
  public:
    // Gets a boolean configuration item.
    // Returns the value of the configuration item or default_value
    // if the item is not found
    bool GetBool(const std::string& section, const std::string& key, bool default_value);

    // Sets a boolean configuration item.
    void SetBool(const std::string& section, const std::string& key, bool value);

    // Gets an integer configuration item.
    // Returns the value of the configuration item or default_value
    // if the item is not found
    int GetInt(const std::string& section, const std::string& key, int default_value);

    // Sets an integer configuration item.
    void SetInt(const std::string& section, const std::string& key, int value);

    // Gets a 64 bit integer configuration item.
    // Returns the value of the configuration item or default_value
    // if the item is not found
    int64 GetInt64(const std::string& section, const std::string& key, int64 default_value);

    // Sets a 64 bit integer configuration item.
    void SetInt64(const std::string& section, const std::string& key, int64 value);

    // Gets a float configuration item.
    // Returns the value of the configuration item or default_value
    // if the item is not found
    float GetFloat(const std::string& section, const std::string& key, float default_value);

    // Sets a float configuration item.
    void SetFloat(const std::string& section, const std::string& key, float value);

    // Gets a string configuration item.
    // Returns the value of the configuration item or default_value
    // if the item is not found
    std::string GetString(const std::string& section, const std::string& key, const std::string& default_value);

    // Sets a string configuration item.
    void SetString(const std::string& section, const std::string& key, const std::string& value);

    // Gets an integer range configuration item.
    // Returns the value of the configuration item or default_value
    // if the item is not found
    std::vector<int> GetRange(const std::string& section, const std::string& key, const std::vectory<int>& default_value);

    // Sets an integer range configuration item.
    void SetRange(const std::string& section, const std::string& key, const std::vectory<int>& value);

  private:
    LpConfig(::LpConfig* config);

    LpConfig(const std::string& config_path, const std::string& factory_config_path);

    ~LpConfig();

    ::LpConfig* config_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_LP_CONFIG_H_HEADER_INCLUDED_AA0440CF */
