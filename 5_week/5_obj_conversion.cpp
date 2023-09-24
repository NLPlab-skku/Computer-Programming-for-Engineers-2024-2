#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
  char aCString[] = "My C-string";
#if 0
  string stringVar = aCString;

  cout << "C String: " << aCString << endl;
  cout << "string: " << stringVar << endl;

#else
  //string stringVar = "C++";
  //strcpy( aCString, stringVar.c_str() );
  aCString = stringVar; // illegal!
  aCString = stringVar.c_str(); // What happens with this code?

  cout << "C String: " << aCString << endl;
  cout << "string: " << stringVar << endl;
#endif
}