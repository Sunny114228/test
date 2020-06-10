#include<opencv2/opancv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(int argc,char** argv)
{ 
   Mat src=imread("test.jpg");
   namedWindow("test",CV_WINDOWAUTOSIZE);
   imshow("test",src);
   waitKey(0);

}
