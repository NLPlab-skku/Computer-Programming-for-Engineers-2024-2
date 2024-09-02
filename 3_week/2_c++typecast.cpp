#include <iostream>
using namespace std;

int main()
{
  cout << endl << "different styles of casting" << endl;
  int myInt = 1;
  double myDouble = 2;

  cout << (double) 1/2 << endl;
  cout << (double) (1/2) << endl;

  cout << 1/(double)2 << endl;
  cout << double(1)/2 << endl;

  cout << myInt/myDouble << endl;
  cout << double(myInt)/myDouble << endl;
}
