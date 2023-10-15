#include <iostream>  
using namespace std;

class Obj {
  public:
    Obj():name("not set") {count++;}
    Obj(string name):name(name) {count++;}
    static void printCounter();
    void printInfo();
  private:
    string name;
    static int count;
};

int Obj::count = 0;

void Obj::printInfo() {
  cout << name << ": " << count << endl;
}

void Obj::printCounter() {
  //cout << name << ": " << count << endl;
  cout << count << endl;
}


int main()
{
  Obj thing1("ko");

  thing1.printInfo();
  thing1.printCounter();

  Obj thing2("kim");

  thing2.printInfo();
  thing2.printCounter();
}