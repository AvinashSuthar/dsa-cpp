#include <iostream>
using namespace std;
int main()
{
  long int a;
  long int b;
long  int mod, sub, div, add, mul;
  char exp;
  cout << "enter the value of A and B";
  cin >> a >> b;
  cout << "enter an experation  ... % ,-,+,/* " << endl;
  cin >> exp;
  switch (exp)
  {
  case '+':
    add = a + b;
    cout << "Add = " << add;

    break;
  case '-':
    sub = a - b;
    cout << "subtract = " << sub;

    break;
  case '%':
    mod = a % b;
    cout << "remender = " << mod;

    break;
  case '/':
    div = a / b;
    cout << "devide = " << div;

    break;
  case '*':
    mul = a * b;
    cout << "multiply = " << mul;

    break;

  default:
    break;
  }
  return 0;
}