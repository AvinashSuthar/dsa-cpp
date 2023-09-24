#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << " enter the value of n to sum the numbers";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;

    return 0;
}