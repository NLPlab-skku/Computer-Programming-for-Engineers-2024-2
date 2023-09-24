#include <iostream>

using namespace std;

int main()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);

  double price = 78.5909309283;
  cout << "The price is $" << price << endl;

  return 0;
}
