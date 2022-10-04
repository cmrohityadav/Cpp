#include<iostream>
using namespace std;

int main()
{
    //scalene, isosceles or equilateral
    cout<<"enter the 3 sides of the triangles\n";
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b && b==c)
    {
        cout<<"Triangle is Equilaetral";
    }
    else if (a==b || b==c)
    {
      cout<<"Triangle is isosceles";

    }
    else{
         cout<<"Triangle is scalene";
    }
    
    return 0;
}
