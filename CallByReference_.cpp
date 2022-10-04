#include<iostream>
using namespace std;
//  call by reference-->> it will reflect
void swap(int* x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    // call by reference-->> it will reflect
    int a=10;
    int b=20;
    cout<<"before swap "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"After swap "<<a<<" "<<b<<endl;
    return 0;
}
