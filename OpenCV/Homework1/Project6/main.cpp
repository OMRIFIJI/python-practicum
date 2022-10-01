#include <opencv2/opencv.hpp>
#include <string.h>

using namespace cv;
using namespace std;

//Контраст

int main(){
    Mat img;
    img = imread("../Gull.jpg", IMREAD_COLOR);

    imshow("Display window 2", img*2);
    waitKey(0);

    imshow("Display window 0.5", img*0.5);
    waitKey(0);

    imshow("Display window -0.1", img*(-0.1) );
    waitKey(0);

    //cout << "Success!" << endl;

    return 0;
}