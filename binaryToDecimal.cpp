#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the binary number"<<endl;
    cin>>n;
    int answer=0;
    int power=1;

    while (n>0)
    {
        int unitDigit=n%10;
        answer=answer+(power*unitDigit);
        n/=10;
        power=power*2;
    }
    cout<<"decimal number is "<<answer<<endl;
    return 0;
}
