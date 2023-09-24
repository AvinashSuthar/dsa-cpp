// alphabate pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    ch = 'A';
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ch = 'A' + i;
        for (int j = 0; j < n; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}