#include <iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = i;
        for (int j = i; j > 0; j--)
        {
            cout << "  " << a;
            a--;
        }
        cout << endl;
    }

    return 0;
}