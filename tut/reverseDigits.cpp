#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number"<<endl;
    int num;
    cin>>num;
    int rev=0;
    while (num>0)
    {
        int lastDigit=num%10;
        rev=rev*10+lastDigit;
        num=num/10;
    }
    cout<<"reverse of the given number "<<rev<<endl;
    return 0;
}
