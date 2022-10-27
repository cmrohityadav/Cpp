#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number"<<endl;
    int number;
    cin>>number;
    int sum=0;
    while (number>0)
    {
        int lastDigit=number%10;
        sum=sum+lastDigit;
        number=number/10;
    }
    cout<<"sum of the digits  "<<sum<<endl;
    return 0;
}
