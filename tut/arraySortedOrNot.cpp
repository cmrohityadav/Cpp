#include<iostream>
#include<vector>

using namespace std;
//array shorted or not
int main()
{
    // vector<int>v(5);
    //  for (int i = 0; i < v.size(); i++)
    //  {
    //     cin>>v[i];
    //  }
    int v[]={1,2,3,4,5,6};
     bool isShorted=0;
  for (int i = 1; i < 6; i++)
  {
    if (v[i]>=v[i-1])
    {
        isShorted=1;
    }
    
  }
  
    cout<<isShorted;
    return 0;
}
