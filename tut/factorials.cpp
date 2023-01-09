#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number"<<endl;
    int num;
    cin>>num;
    int fact=1;
    for (int i = 1; i <=num; i++)
    {
        fact=fact*i;

    }
    cout<<"factorial of the number is  "<<fact<<endl;

    return 0;
}
