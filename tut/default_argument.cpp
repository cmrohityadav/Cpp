#include<iostream>
using namespace std;
    int solve(int per,int red=0){
        return(per-red);
    }

int main()
{
    cout<<"SCC score>>"<<solve(90)<<endl;
    cout<<"CBSE score>>"<<solve(90,10)<<endl;
    return 0;
}
