#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cout << " Enter the  value of n ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        ch = 'A';
        ch = 'A' + (n - i);
        for (int j = 0; j < i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}