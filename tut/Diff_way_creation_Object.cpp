#include<iostream>
using namespace std;
class school{
    public:
        
        int mrk;
        
         void setmark( int _mrk){
           
            mrk=_mrk;
           
         }
         void Display(){
           
            cout<<"totol marks is : "<<mrk<<endl;


         }
    };
int main()
{
    school r;
    school* ry=new school();
    r.setmark(40);
    r.Display();
    ry->setmark(85);
    ry->Display();
 
    

   

    return 0;
}
