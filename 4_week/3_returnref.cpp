#include <iostream>

using namespace std;

double& func( double& variable )
{
  variable++;  
  return variable;
}

double& mal_func( double& variable)
{
  double temp=variable;

//  return temp;
  return variable;
}

int main() {
  double dVar = 3.14;

  cout << dVar << endl;
  cout << func(dVar) << endl;
  cout << dVar << endl;

  double dVar2 = mal_func(dVar);
  // See the difference
  //double& dVar2 = mal_func(dVar);
  cout << "&dVar:" << &dVar << " dVar:" << dVar << endl;
  cout << "&dVar2:" << &dVar2 << " dVar2:" << dVar2 << endl;
}