#include<iostream>
using namespace std;

int main()
{
    cout<<"Multiplictition table \nEnter the Number\n";
    int n;
    cin>>n;
    for (int i = 1; i <=10; i++)
    {
        cout<<i<<"x"<<n<<"="<<i*n<<endl;
    }
    
    return 0;
}
