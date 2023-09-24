#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <=(n - i + 1); j++)
        {
            cout << j;
            if (j == (n - i + 1))
            {

                for (int h = 0; h <(i*2 ); h++)
                {
                    cout << "*";
                }
            }
        }

        for (int k = (n - i + 1); k > 0; k--)
        {
            cout << k;
            // if (k == (i - 1))
            // {
            //     for (int f = 0; f < (i-1 ); f++)
            //     {
            //         cout << "*";
            //     }
            // }
        }

        cout << endl;
    }

    return 0;
}