#include<iostream>
using namespace std;

int main()
{
    int array[5]={1,2,3,4,5};
    int n=5;
    int start=0;
    int end=n-1;
    while (start<end)
    {
        int temp=array[start];
         array[start]=array[end];
        array[end]=temp;
        start++;
        end--;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i];
    }
    
    return 0;
}
