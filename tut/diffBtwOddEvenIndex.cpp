#include<iostream>
using namespace std;
// Find the difference between the sum of elements at even indices to the sum of elements at odd 
//indices.
int main()
{
    int array[]={1,2,1,2,1,2};
    int ans=0;
    for (int i = 0; i < 6; i++)
    
    {
        if (i%2==0)
        {
            ans+=array[i];
        }
        else{
            ans-=array[i];
        }
        
    }
    cout<<ans;
    return 0;
}
