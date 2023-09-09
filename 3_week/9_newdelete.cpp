#include <iostream>

using namespace std;

int main()
{
  int* ptr = new int;
  *ptr = 1;
  cout << *ptr << endl;

  // guess results
  cout << ptr << endl;
  cout << sizeof(int*)<< ' ' << sizeof(ptr) << endl;
  cout << sizeof(int)<< ' ' <<sizeof(*ptr) << endl;

  if(ptr != nullptr) delete ptr;
  ptr = nullptr;
  return 0;
}