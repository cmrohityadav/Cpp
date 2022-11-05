#include<iostream>
using namespace std;

int main()
{
    int array[5];
   
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        sum=sum+array[i];
    }
    cout<<"sum of the array is "<<sum<<endl;
    return 0;
}
