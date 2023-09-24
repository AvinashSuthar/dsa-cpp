#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k <= (i - 1); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}