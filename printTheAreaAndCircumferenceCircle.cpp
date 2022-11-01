#include<iostream>
using namespace std;
const float PI=3.14;
double area(int radius){
  double area=2*PI*radius*radius;
  return area;
}
double circumference(int radius){
   double circm=2*PI*radius;
    return circm;
}
int main()
{
    cout<<"Enter the Radius of circle"<<endl;
    int radius;
    cin>>radius;
    cout<<"Area of the Circle is "<<area(radius)<<endl;
    cout<<"Circumference of the Circle is "<<circumference(radius)<<endl;

    return 0;
}
