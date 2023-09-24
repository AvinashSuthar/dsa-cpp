#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the value of n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
            if (k == i)
            {
                for (int h = (i-1); h > 0; h--)
                {
                    cout << h;
                }
            }
        }
        cout << endl;
    }

    return 0;
}