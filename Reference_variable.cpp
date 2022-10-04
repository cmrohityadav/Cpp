#include<iostream>
using namespace std;

int main()
{
    
    int a=10;
    int b=a;
    // int& b=a;
    a=a+1;

    cout<<a<<"  "<<b<<endl;
    cout<<&a<<" "<<&b<<endl; //verify
    return 0;
}
