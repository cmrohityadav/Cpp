#include<iostream>
using namespace std;

int main()
{
    //Program to find maximum, minimum among two numbers
    cout<<"enter two number\n";
    int n1,n2;
    cin>>n1>>n2;

    if (n1>n2)
    {
       cout<<"the greater number is  "<<n1;
    }
    else{
        cout<<"the greater number is  "<<n2;
    }
    return 0;
}
