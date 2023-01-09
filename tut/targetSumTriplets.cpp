#include<iostream>
using namespace std;

int main()
{
 int   array[]={1,2,36,52,4,5,6,8,7,9,6};
    int sumKey=20;
    int pairs=0;
    int size=11;
    for (int i = 0; i < size; i++)
    {
        for (int  j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
            if (array[i]+array[j]+array[k]==sumKey)
            {
                pairs++;
            }
            
            }
            
        }
        
    }
    cout<<pairs<<endl;
    return 0;
}
