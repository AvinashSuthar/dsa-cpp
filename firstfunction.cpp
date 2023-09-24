#include <iostream>
using namespace std;
long int ans=1;
int power(int a, int b)
{
    
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
   long int a, b;
    cin >> a >> b;

    power(a,b);
    cout <<ans;
  
}