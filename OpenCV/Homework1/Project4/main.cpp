#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;
using namespace std;

//Вход - путь к одному файлу

int main(int argc, char** argv){
    Mat img;

    if(argc!=2){
        cout << "Введите путь к файлу аргументом терминала" << endl;
        return -1;
    }
    
    string name(argv[1]);
    //cout << name << endl;

    img = imread(name, IMREAD_GRAYSCALE);
    if(img.empty()){
        return -1;
    }

    string tmp(name);
    reverse(tmp.begin(), tmp.end());
    int sep_num = name.length() - (tmp.find(".") + 1);

    string name_out= name.substr(0, sep_num) + "_mono" + 
        name.substr(sep_num, name.length() );

    //cout << name_out << endl;
    imwrite(name_out, img);
    
    cout << "Success!" << endl;

    return 0;
}