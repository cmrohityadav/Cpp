#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
             cout<<">>5th wala loop skip ho jayega";
            continue;
        }
        if (i==8)
        {
            cout<<"break loop";
            break;
        }
        
        
        cout<<i<<endl;
    }
    
    return 0;
}
