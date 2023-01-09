#include <iostream>
using namespace std;

int main()
{
    cout << "enter the number 5 digits" << endl;
    int array[5];

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        cin >> array[i];
    }
    cout << "enter the key" << endl;
    int key;
    cin >> key;
    int index = -1;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {

        if (array[i] == key)
        {

            index = i;
        }
    }
    cout << " index value of the key " << index;

    
    return 0;
}