#include<iostream>
using namespace std;
// call by value--->>it will not reflect
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    
}
int main()
{
     //call by value--->>it will not reflect
    
    int a=10;
    int b=20;
    cout<<"before swap "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap "<<a<<" "<<b<<endl;
    
    return 0;
}
