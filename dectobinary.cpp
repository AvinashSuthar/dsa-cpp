#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "Ente the number  to convert  decimel to Binary ";
    cin >> n;
    int ans=0;
    for (int i = 0; n != 0; i++)
    {
        int digit = n &1;
        ans = (digit * pow(10, i)) + ans;
        n = n >> 1;
        
    }
    cout << "Answer is =" << ans;

    return 0;
}