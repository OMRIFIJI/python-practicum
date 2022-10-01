#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;
using namespace std;

//Сделал 2 окна - у одного можно менять размер мышкой


int main(){
    Mat img = imread("../Gull.jpg", IMREAD_COLOR);
    Mat img2 = img.clone();

    namedWindow( "img", WINDOW_NORMAL);
    imshow("img", img);
    waitKey(0);

    namedWindow( "img2", WINDOW_AUTOSIZE);
    imshow("img2", img2);
    waitKey(0);
    

    return 0;
}