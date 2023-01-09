#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the alphabet leter\n";
    char aph;
    cin>>aph;
    if (aph=='a' || aph=='e' || aph=='i' || aph=='o' || aph=='u'|| aph=='A' || aph=='E' || aph=='I' || aph=='O' || aph=='U' )
    {
       cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
    

    return 0;
}
