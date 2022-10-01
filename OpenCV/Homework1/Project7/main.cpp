#include <opencv2/opencv.hpp>
#include <string.h>

using namespace cv;
using namespace std;

//Яркость

int main(){
    Mat img;
    img = imread("../Gull.jpg", IMREAD_COLOR);
   
    cout << img (Rect (0,0,2,2) ) << "\n" 
        << (img +100) (Rect (0,0,2,2) ) << "\n" 
        << (img -10) (Rect (0,0,2,2) ) << endl;
    cout << "Меняется только первая компонента!" << endl;

    imshow("Display window -(50,0,0)", img - 50);
    waitKey(0);
    imshow("Display window +(50,50,50)", img + Scalar(50,50,50));
    waitKey(0);

    

    return 0;
}