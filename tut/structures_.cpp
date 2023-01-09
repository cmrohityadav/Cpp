#include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    long roll;
};

int main()
{
    struct student s;
    s.name="rohit";
    s.age=22;
    s.roll=40;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.roll<<endl;
    return 0;
}
