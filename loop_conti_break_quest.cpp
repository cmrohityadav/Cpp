#include<iostream>
using namespace std;

int main()
{
    //Write a program to print all odd numbers till n
    // cout<<"enter the number\n";
    // int n;
    // cin>>n;
    // int sum=0;
    // for (int  i = 1; i <=n; i++)
    // {
    //    if (i%2==0)
    //    {
    //     continue;
    //    }
       
    //     cout<<i<<endl;
    // }



//problem 2
    //Write a program to check if a given number is prime or not
    // cout<<"enter the number\n";
    // int n;
    // cin>>n;
    // for ( int i = 2; i < n; i++)
    // {
    //   if (n%i==0)
    //   {
    //     cout<<"Non Prime Number";
    //     break;
    //   }
      
    //   if(i==n)
    //   {
    //      cout<<" Prime Number";
    //   }
      
    // }







    //problem 3
    //Write a program to print all prime numbers in a given range
    
 
        int a,b;
        cout<<"Enter 2 numbers: ";
        cin>>a>>b;
 
        for (int num=a; num<=b; num++) 
        {
              int i;
                  for (i=2; i<num; i++) 
                  { 
                      if (num%i==0) 
                      { //it is not prime
                            break;
                      }
                  }
          if (i==num) 
          { 
                  cout<<num<<endl;
          }
        }
    



    return 0;
}
