#include<iostream>
using namespace std;
int a=20; // global

void sum(int a){ //formal parameters
    int  ans=a+a;
    cout<<ans<<endl;
}

int main()
{
    // int a=2;
    sum(a); //actual parameters

    // cout<<a<<endl;
    // { 
    //     int a=10;
    //     cout<<a<<endl;
    // }
    // cout<<a;
    return 0;
}
