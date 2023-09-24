#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i; j++)
        {
            cout << n << "  ";
        }
        cout << endl;
    }

    return 0;
}