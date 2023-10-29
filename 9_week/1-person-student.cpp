#include <iostream>
#include <string>
using namespace std;

class Person 
{
  public:
    Person() : name("not set") {}
    Person(string name) : name(name) {}
    string getName() const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  //private:
    string name;
};

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
}

class Student : public Person
{
  public:
    Student() : Person() {}
    Student(string name) : Person(name) {}
    void setSid(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
  private:
    int sid;
    //string name;
};

int main()
{
  Student st1("john");

  cout << st1.getName() << endl;
}
