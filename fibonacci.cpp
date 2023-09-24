#include <iostream>
using namespace std;
int main()
{
    int n, first_term, second_term;
    first_term = 0;
    second_term = 1;
    int next_term = 0;
    cout << " Enter the value to print fibonacci series  ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        next_term = first_term + next_term;
        first_term = second_term;
        second_term = next_term;
        cout << next_term << " , ";
    }

    return 0;
}