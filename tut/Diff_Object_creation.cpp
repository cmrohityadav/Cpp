#include<iostream>
using namespace std;
class school{
    public:
        int roll;
        int mrk;
        string name;
         void setmark(int _roll, int _mrk, string _name){
            roll=_roll;
            mrk=_mrk;
            name=_name;
         }
         void Display(){
            cout<<"roll number is : "<<roll<<endl;
            cout<<"totol marks is : "<<mrk<<endl;
            cout<<"Student Name is : "<<name<<endl;

         }
    };
int main()
{
    school r;
    r.setmark(40,95,"Rohit");
    r.Display();

    school t;
    t.setmark(20,97,"tee");
    t.Display();

    return 0;
}
