#include<iostream>
using namespace std;
class student{
    public:
    string name;
    void setname(string _name){
        name=_name;
    }
    friend void display(student s);
};
void display(student s){
cout<<s.name<<endl;
}
int main()
{
    student s;
    s.setname("rohit");
    //   s.display(s);
      display(s);
    return 0;
}
