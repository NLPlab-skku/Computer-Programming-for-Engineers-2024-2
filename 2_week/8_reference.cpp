#include <iostream>

using namespace std;

int main()
{
  int value1 = 5, value2 = 9; // normal integer
  int& ref1 = value1, &ref2 = value2; // reference to variable value

  value1 = 6; // value1 is now 6
  ref1 = 7; // value is now 7

  cout << value1 << endl; // prints 7
  ++ref1;
  cout << value1 << endl; // prints 8

  cout << &value2 << endl; // prints 0012FF7C
  cout << &ref2 << endl; // prints 0012FF7C
  return 0;
}