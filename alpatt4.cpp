#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch ;
    cout << " Enter  the value of n";
    cin >> n;
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            ch = 'A' + i + j - 1;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}