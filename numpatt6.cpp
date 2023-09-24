#include <iostream>
using namespace std;
int main()
{
    int print = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << print << " ";
        }
        cout << endl;
    }

    return 0;
}