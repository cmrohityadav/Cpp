#include<iostream>
using namespace std;

class college{
    // protected:
    private:
string collegeName;
public:
void setclgname(string _collegename){
collegeName=_collegename;

}
};
class student :public college{
    public:
    string studentname;
    void setstudentname(string _studentname){
        studentname=_studentname;
    }
 void display(){
    collegeName="RGIT";
    cout<<"college name "<<collegeName<<endl;                                       
    cout<<"Student name "<<studentname<<endl;                                       
 }
};
int main()
{
     student s;
      s.setstudentname("Rohit");
    //   s.setclgname("ACE");
    // s.collegeName="tcet";
      s.display();

    return 0;
}
