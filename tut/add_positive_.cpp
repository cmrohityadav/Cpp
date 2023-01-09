#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number to add only postive number\n";
    int n;
    cin>>n;
    int sum=0;
    while (n>0)
    {
        sum+=n;
       
     cout<<"enter the number to add only postive number\n";
     cin>>n;
    
    }
     cout<<sum;
    return 0;
}
