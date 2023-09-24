#include <iostream>
using namespace std;

int main()
{
  string str1 = "abc", str2 = "Abc";
  if (str1<str2)
    cout << "true" << endl;
  else
    cout << "false" << endl;

  
  string s1, s2;

  cout << "Enter: ";
  cin >> s1;
  cout << s1 << endl;

  cin.ignore();

  getline(cin, s2);
  cout << s2 << endl;
  
  string s;

  for(int i=0; i < 3; i++)
  {
    cin.ignore();
    getline(cin, s);
    cout << s << endl;
  
  }

  return 0;
}