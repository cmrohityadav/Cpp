#include<iostream>
using namespace std;

class Addition{
    public:
    int sum(int a){
        return a;
    }
    int sum(int a, int b){
        return a+b;
    }
    double sum(double a, double b){
        return a+b;
    }
};
int main()
{
     Addition a;
    cout<<a.sum(2)<<endl;
    cout<<a.sum(2,5)<<endl;
    cout<<a.sum(2.3,5.6)<<endl;

    return 0;
}
