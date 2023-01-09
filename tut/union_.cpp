#include<iostream>
using namespace std;
union animals
{
    int cat;
    int dog;
    int rabbit;
};

int main()
{
    union animals a;
    a.cat=1;
    a.dog=5;
    cout<<a.cat<<endl;
    cout<<a.rabbit<<endl;
    return 0;
}
