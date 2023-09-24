#include <iostream>

using namespace std;

int main()
{
  char s[10] = "Hi Mom!";

  cout << s << endl;

  // Checking items of s
  for(char c : s)
    cout << c << ":" << int(c) << endl;
}
