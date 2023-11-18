#include <iostream>

using namespace std;

class Pet
{
  public:
    virtual void print() const = 0;
    string name;
};

class Dog : public Pet
{
  public:
    string breed;
    virtual void print() const override final;
};

void Dog::print() const
{
  //Pet::print();
  cout << "name: " << name << endl;
  cout << "breed: " << breed << endl;
}

int main()
{
  Dog dog;
  //Pet pet;

  dog.name = "Tiny";
  dog.breed = "Great Dane";

  dog.print();

  return 0;
}