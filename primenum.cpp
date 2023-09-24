#include <iostream>
using namespace std;
int main()
{
    int n, prime;
    cout << " Enter the number to check is it prime or not ....";
    cin >> n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "this   is not  a prime number";
    }
    else
    {
        cout << "this is  a prime number";
    }

    return 0;
}