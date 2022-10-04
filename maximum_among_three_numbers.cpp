#include<iostream>
using namespace std;

int main()
{
    cout<<"enter 3 number\n";
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    if (n1>n2 && n1>n3)
    {
       cout<<"the greater number is  "<<n1;
    }
    else if(n2>>n1 && n2>>n3)
    {
        cout<<"the greater number is  "<<n2;
    }
    else{
        cout<<"the greater number is  "<<n3;
    }
    return 0;
}
