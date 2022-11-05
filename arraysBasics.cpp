#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    cout<<"using for loop"<<endl;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        cout<<a[i]<<endl;
    }
    
    cout<<"using for each loop"<<endl;

    for ( int i:a)
    {
        cout<<i<<endl;
    }
    
    
    return 0;
}
