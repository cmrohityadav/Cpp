#include<iostream>
using namespace std;


int count(){
    // int  c=0;
    int  static c=0;
    c++;
    return c;
}
int main()
{
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    cout<<count()<<endl;
    return 0;
}
