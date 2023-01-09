#include<iostream>
using namespace std;

class college{
    public:
string collegeName;

void setclgname(string _collegename){
collegeName=_collegename;

}
};
class student :public college{
    public:
    string sdtname;
    void setsdtname(string _sdtname){
        sdtname=_sdtname;
    }
 void display(){
    cout<<"college name "<<collegeName<<endl;                                       
    cout<<"Student name "<<sdtname<<endl;                                       
 }
};
int main()
{
    student s;
    s.setclgname("ACE");
    s.setsdtname("Rohit");
    s.display();
    return 0;
}
