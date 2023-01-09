#include<iostream>
using namespace std;

int main()
{
    int array[]={3,4,6,7,1};
    int size=5;
    int target=4;
    int pair=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)        
        {
            if (array[i]+array[j]==target)
            {
                pair++;
            }
            
        }
        
    }
    cout<<pair<<endl;
    return 0;
}
