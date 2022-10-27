#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number"<<endl;
    int number;
    cin>>number;
    int counter=0;

    while (number>0)
    {
        
        number=number/10;
        counter++;
    
    }
    cout<<"the number of digit is "<<counter;
    return 0;
}
