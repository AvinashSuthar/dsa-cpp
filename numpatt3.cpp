#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= (i - 1); j++)
        {
            cout << " ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}