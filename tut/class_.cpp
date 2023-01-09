#include<iostream>
using namespace std;

// class Phone{
// //public/private/protected
// // private:
// int ram;
// int rom;
// public: 
// int cam;
// void setData(int _cam, int _ram, int _rom){
//     cam=_cam;
//     ram=_ram;
//     rom=_rom;

// }
// void getData(){
//     cout<<"camera>>"<<cam<<endl;
//     cout<<"Ram>>"<<ram<<endl;
//     cout<<"rom>>"<<rom<<endl;

// }
// };
int main()
{


    //example 1


//     class Phone{
// //public/private/protected
// // private:
// int ram;
// int rom;
// public: 
// int cam;
// void setData(int _cam, int _ram, int _rom){
//     cam=_cam;
//     ram=_ram;
//     rom=_rom;

// }
// void getData(){
//     cout<<"camera>>"<<cam<<endl;
//     cout<<"Ram>>"<<ram<<endl;
//     cout<<"rom>>"<<rom<<endl;

// }
// };
//     Phone p;
//     p.setData(12,4,64);
// //   p.setData(64,16,128);
//     // p.ram=16;
//     p.getData();




//example 2
class student{
    public:
    string naam;
    // private:
    int m1;
    int m2;
    void setDetail(int _m1, int _m2, string _naam)
    {
        m1=_m1;
        m2=_m2;
        naam=_naam;
    }
    void display(){
        cout<<"mark of m1 "<<m1<<endl;
        cout<<"mark of m2 "<<m2<<endl;
        cout<<"name of student "<<naam<<endl;
    }
};

student s;
s.setDetail(40,50,"Rohit");
//cheating here by students
s.naam="rahul";
s.m1=100;
s.display();

    return 0;
}
