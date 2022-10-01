#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;
using namespace std;

//В цикле обновляй изображение, например, 
//напечатав обратный отсчёт по нажатию клавиши.

int main(){
    Mat img(400,500,CV_8UC3);
    string text;
    Point textOrg(img.cols/2 - 50, img.rows/2);
    int fontFace = FONT_HERSHEY_DUPLEX;
    double fontScale = 5;
    Scalar color(255,0,0);
    int thickness = 4;
    
    for (int i=0; i<3; i++){
        text = to_string(3-i);
        putText(img, text, textOrg, fontFace, fontScale, 
            color, thickness);
        imshow("Countdown", img);
        
        img = Scalar(0,0,0);
        
        waitKey(0);
        destroyWindow("Countdown");
    }
    return 0;
}