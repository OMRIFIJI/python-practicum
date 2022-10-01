#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;
using namespace std;



int main(){
    Mat img = imread("../Gull.jpg", IMREAD_COLOR);
    Rect roi( img.cols/2-50, 40, img.cols/2+30, 160);

    Mat img2 = img(roi);

    imshow("img", img);
    waitKey(0);

    imshow("img2", img2);
    waitKey(0);
    

    return 0;
}