#include<iostream>
using namespace std;

class Person{
public:
string name;
Person(){
    cout<<"construction is called\n";
    name="rohit";
}
void display(){
    cout<<name<<endl;
}
};
int main()
{
    Person p;
    p.display();
    return 0;
}
