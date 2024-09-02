#include <iostream>

using namespace std;

class Person 
{
  public:
    Person() : name("not set") {
      cout << "Person() ctor" << endl;
    }
    Person(string name) : name(name) {
      cout << "Person(name) ctor" << endl;
    }
    ~Person(){
      cout << "Person() dtor" << endl;
    }
    string getName() const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
};

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
}

class Student : public Person
{
  public:
    Student() : sid(0) {
      cout << "Student() ctor" << endl;
    }
    Student(int sid) : sid(sid) {
      cout << "Student(sid) ctor" << endl;
    }
    Student(string name, int sid) : Person(name), sid(sid) {
      cout << "Student(name,sid) ctor" << endl;
    }
    ~Student(){
      cout << "Student() dtor" << endl;
    }
    void setSid(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
    void printInfo();
  private:
    int sid;
};

void Student::printInfo()
{
  Person::printInfo();
  cout << "Student ID: " << sid << endl;
}

int main()
{
  Student Kim("KimSJ", 200212);
  Kim.printInfo();
  return 0;
}