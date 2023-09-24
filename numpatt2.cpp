#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the vlaue of n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}