#include <iostream>
using namespace std;
int power()
{
    int a, b, ans = 1;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
     

    cout << power() << endl;
    cout << power() << endl;
    cout << power() << endl;
    cout << power() << endl;
    cout << power() << endl;
    return 0;
}