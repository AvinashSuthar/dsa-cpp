#include <iostream>
using namespace std;
bool evenodd(int num)
{

    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cin >> num;
    if (evenodd(num))
    {
        cout << "number is even";
    }
    else
    {
        cout << "number is odd";
    }

    return 0;
}