#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;
using namespace std;

//Вход - путь к нескольким файлам

int main(int argc, char** argv){
    Mat img;

    if(argc < 2){
        cout << "Введите путь к файлам аргументами терминала" << endl;
        return -1;
    }
    
    
    for(int i=1;i<argc;i++){
        img = imread(argv[i], IMREAD_COLOR);
        imshow("img " + to_string(i), img);
        waitKey(0);
    }

    //cout << "Success!" << endl;

    return 0;
}