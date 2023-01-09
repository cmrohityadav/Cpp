#include<iostream>
using namespace std;
bool sortfun(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[i-1])
        {
           return true;
        }
    }
        return false;
    
}
int main()
{
    int n; 
    cin>>n; //array ka size
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    if (sortfun(arr,n)==1)
    {
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    

    return 0;
}
