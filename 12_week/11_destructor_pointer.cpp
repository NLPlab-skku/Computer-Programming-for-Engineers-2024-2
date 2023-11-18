#include <iostream>
using namespace std;

class Person 
{
  public:
    virtual ~Person() {
       cout << "Person Destructor \n";
    }
    Person() {
    }
};
class Man : public Person 
{
  public:
    virtual ~Man() {
       cout << "Man Destructor \n";
    }
    Man() {
    }

};

int main(void) 
{
    Person* per = new Man;
    Person* per1 = new Person;

    delete per;
    delete per1;

    return 0;
}
