#ifndef INSTAGRAM_FILTER_H
#define INSTAGRAM_FILTER_H

#include <opencv2/opencv.hpp>
#include <string>
#include <utility>

using namespace cv;

namespace instagramfilter {

class InstagramFilter {
   private:
    Mat img;

   public:
    InstagramFilter(std::string img_path);
    void PencilSketch(Mat img);
    void Cartoonify(Mat img);
};
}  // namespace instagramfilter

#endif  // INSTAGRAM_FILTER_H