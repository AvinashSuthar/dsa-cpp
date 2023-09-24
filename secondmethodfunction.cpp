#include <iostream>
using namespace std;
int power()
{
    int ans = 1;
    int a, b;
    cout << "Enter  two numbers ";
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
      
    cout << power();
    return 0;
}