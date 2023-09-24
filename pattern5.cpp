#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 0;
    cout << "Enter the value of n ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " " << a;
        }
        cout << endl;
        a++;
    }

    return 0;
}