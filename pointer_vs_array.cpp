#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,1,2,3,4};
    int *ptr=arr;

    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<" size of the pointer "<<sizeof(ptr)<<"" <<"\nsize of the array"<< " "<<sizeof(arr)<<endl;
    cout<<"*ptr :"<<*ptr<<endl;
    cout<<"*(ptr+2) :"<<*(ptr+2)<<endl;
    cout<<" *(arr+1) :"<<*(arr+1)<<endl;
    
    
    return 0;
}
