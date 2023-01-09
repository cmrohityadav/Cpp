#include<iostream>
using namespace std;
void voteElgty(int age){
    if (age>=18)
    {
        cout<<"Yes! you can vote"<<endl;
    }
    else{
        cout<<"NO,you cannot vote";

    }
}
int main()
{
    cout<<"Dear Citizen ! \n Enter the correct age"<<endl;
    int age;
    cin>>age;
    voteElgty(age);
    return 0;
}
