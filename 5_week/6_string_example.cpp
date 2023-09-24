#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str("abcde");

  str.erase(0,1);
  cout << str << endl << str.find("b",0) << endl;
}