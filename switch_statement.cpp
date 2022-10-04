#include<iostream>
using namespace std;

int main()
{
    cout<<"welcome to Calculator\nEnter the 2 numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"choose operator + - / * :";
    char oper;
    cin>>oper;
    switch (oper)
    {
    case '+':
    cout<<a+b;
        
        break;
     case '-':
    cout<<a-b;
        
        break;
     case '/':
    cout<<a/b;
        
        break;
     case '*':
    cout<<a*b;
        
        break;
    default:
    cout<<"enter correct operator";
        break;
    }
    return 0;
}
