#include <iostream>
using namespace std;
int main()
{
    int count = 10;
    for (int i = 0; i < count; i++)
    {
        switch (i)
        {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three ";
        exit (3 );
            break;
        case 4:
            cout << "four";
            break;
        default:
            break;
        }
    }

    return 0;
}
