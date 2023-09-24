#include <iostream>

using namespace std;

int main()
{
  //Following code has errors
  char name1[5] = "tasan";
  char name2[] = "tasan";
 
  cout << name1 << " " << sizeof(name1) << endl;
  cout << name2 << " " << sizeof(name2) << endl;
}

