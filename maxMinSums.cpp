#include <iostream>
#include <climits>
using namespace std;
int main()
{
  int array[5] = {10, 1, 2, 15, 99};
 


  int mx = INT_MIN;
  int mn = INT_MAX;
  for (int i = 0; i < 5; i++)
  {
    mx= max(mx, array[i]);
    mn= min(mn, array[i]);
  }
  int ans = mx + mn;
  cout<<mx<<endl;
  cout<<mn<<endl;
  cout << "max value is " << mx << endl;
  cout << "min value is " << mn << endl;
  cout<<ans;
  return 0;
}
