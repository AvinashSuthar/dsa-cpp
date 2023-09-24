#include <iostream>
using namespace std;
int main() // 1
           // 23
           // 345
           // 4567
{
    int n;
    int a;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        a = i;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }

    return 0;
}