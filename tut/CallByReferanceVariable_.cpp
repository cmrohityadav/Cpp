#include<iostream>
using namespace std;
 void swaps(int& x,int& y){
    int temp=x;
    x=y;
    y=temp;
}   
int main()
{
    int a=10;
    int b=20;
//by reference variable
     cout<<"before swap "<<a<<" "<<b<<endl;
    swaps(a,b);
    cout<<"After swap "<<a<<" "<<b<<endl;
    return 0;
}
