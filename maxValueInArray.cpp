#include <iostream>
using namespace std;

int main()
{
    cout << "enter the number 5 digits"<<endl;
    int array[5];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cin >> array[i];
    }
    //max value in array logic
    int mx=array[0];
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
       if (array[i]>mx)
       {
        mx=array[i];
       }
       
    }
    cout<<"the maximium is "<<mx;
    return 0;
}
