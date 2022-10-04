#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;

    person(){
        name="name";
        age=0;

    }
    person(string _name,int _age){
        name=_name;
        age=_age;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    person detail;
    // person detail("rohit",21);
    detail.display();
    return 0;
}
