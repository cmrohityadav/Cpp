#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the base a"<<endl;
    int a;
    cin>>a;
    cout<<"enter the power "<<endl;
    int b;
    cin>>b;
    int result=1;
    for (int i = 1; i <=b; i++)     
    {
     result*=a;
    }
    // cout<<a<<endl; this is the my mistake while trying
    cout<<result<<endl;
    return 0;
}
