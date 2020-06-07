#include "instagram-filter.h"

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

namespace instagramfilter {
InstagramFilter::InstagramFilter(std::string img_path) {
    img = imread(img_path, 0);
    imshow("trump", img);
    waitKey(0);
}

void InstagramFilter::PencilSketch(Mat img) { Mat pencil_sketch_img; }

void InstagramFilter::Cartoonify(Mat img) {}
}  // namespace instagramfilter

int main() {
    std::string img_path = "./src/images/trump.jpg";
    instagramfilter::InstagramFilter instagram_filter{img_path};
    return 0;
}
