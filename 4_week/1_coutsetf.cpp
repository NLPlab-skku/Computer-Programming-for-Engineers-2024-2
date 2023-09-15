#include <iostream>
using namespace std;

int main( )
{
  int integer = 511;
  double floating1 = 511;
  double floating2 = 11111.0/3.0;

  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(3);
  cout << integer << endl;
  cout << floating1 << endl;
  cout << floating2 << endl;

  return 0;
}