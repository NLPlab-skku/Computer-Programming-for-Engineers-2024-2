#include <iostream>
#include <string>

using namespace std;

class Base 
{
  public:
    Base() : s("기반") { cout << "기반 클래스" << endl; }
    void what() { cout << s << endl; }
  
  private: 
    string s;
};

class Derived : public Base 
{
  public:
    Derived() : s("파생"), Base() { cout << "파생 클래스" << endl; }
    void what() { cout << s << endl; }
  private:
    string s;
};

int main() 
{
  Base p;
  Derived c;

  cout << "=== 포인터 버전 ===" << endl;
  
  Base* p_c = &c;
  p_c->what();
  
  return 0;
}