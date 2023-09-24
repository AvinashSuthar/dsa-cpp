#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the value of n ";
    cin >> n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }

    return 0;
}