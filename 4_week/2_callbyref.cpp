#include <iostream>
using namespace std;

int AddOneRef(int& i) {
  return ++i;
}
int AddOne(int i) {
  return ++i;
}
double HalfRef(double& d){
  d /= 2;
  return d;
}
double Half(double d)
{
  d /= 2;
  return d;
}

int main()
{
  int i = 1;
  double d = 3.14;

  cout << "before (i): " <<  i << endl;
  cout << AddOne (i) << endl;
  cout << "after Add (i) : " << i << endl;  
  cout << AddOneRef (i) << endl;
  cout << "after AddRef (i) : " << i << endl;
  
  cout << "before (d): " << d << endl;
  cout << Half(d) << endl;
  cout << "after Half(d): " << d << endl;
  cout << HalfRef(d) << endl;
  cout << "after HalfRef(d): " << d << endl;
}
