#ifndef LINPHONE_VIDEO_SIZE_H_HEADER_INCLUDED_AA04752C
#define LINPHONE_VIDEO_SIZE_H_HEADER_INCLUDED_AA04752C

namespace linphone {
namespace core {

// Class describing a video size.
class VideoSize {
  public:
    // The video size width (eg. 640).
    void SetWidth(int width);

    int GetWidth();

    // The video size height (eg. 480).
    void SetHeight(int height);

    int GetHeight();

    // The video size name (eg. vga).
    void SetName(const std::string& name);

    std::string GetName();

  private:
    VideoSize(int width, int height);

    VideoSize(int width, int height, const std::string& name);

    int width_;

    int height_;

    std::string name_;

};

} // namespace core
} // namespace linphone



#endif /* LINPHONE_VIDEO_SIZE_H_HEADER_INCLUDED_AA04752C */
