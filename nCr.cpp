#include <iostream>
using namespace std;
int ans;
int factorial(int n)
{

    int factorial = 1;
    for (int i = 0; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
float nCr(int n, int r)
{

    int numinator = factorial(n);
    int demonitor = factorial(r) * factorial(n - r);
    int ans = numinator / demonitor;
    return ans;
}
int main()
{
    int n, r;
    cout << " Enter the value of n and r " << endl;
    cin >> n >> r;
    nCr(n,r);

    cout << "ans is" << ans << endl;

    return 0;
}