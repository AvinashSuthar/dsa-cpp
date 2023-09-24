#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    char ch;
    ch = 'A';

    for (int i = 0; i < n; i++)
    {
        ch = 'A' + i;
        for (int j = 0; j < n; j++)
        {

            cout << ch;

            ch++;
        }
        cout << endl;
    }

    return 0;
}