#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the value of n ";
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int j = n; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}