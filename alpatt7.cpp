#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cout << "enter the value of n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ch = ('A' + i + j - 2);
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}