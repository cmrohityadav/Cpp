#include<iostream>
using namespace std;
// //series
// sum=1-2+3-1...n
int main()
{ int n;
    cin>>n;
    int results=0;
    for (int i = 0; i <=n; i++)
    {
        if (i%2==0)
        results-=i;
        else
        results+=i;
        
    }
    cout<<results<<endl;
    return 0;
}
