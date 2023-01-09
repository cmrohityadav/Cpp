#include<iostream>
using namespace std;

class Person{
public:
string name;
int age;
//default constructor
Person(){
    cout<<"construction is called\n";
    name="no Name";
    age=0;
}
//parametric construction
Person(string _name,int _age){
    name=_name;
    age=_age;
}
void display(){ 
    cout<<"my name is  "<<name<<endl;
    cout<<"my age is "<<age<<endl;
}
};
int main()
{
    Person p;
    // Person p("rohit",19);
    p.display();
    return 0;
}
