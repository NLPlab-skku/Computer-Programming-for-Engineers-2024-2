#include <iostream>

using namespace std;

class Pet
{
  public:
    string name;
    virtual void print() const;
    Pet() {}
    Pet(const Pet& pet) {
      cout << "in copy ctor(Pet)" << endl;
      name = pet.name;
    }
};

class Dog : public Pet
{
  public:
    string breed;
    void print() const;
    Dog() {
    }
    Dog(const Dog& dog):Pet(dog), breed(dog.breed) {
      cout << "in copy ctor(Pet)" << endl;
    }
};

void Pet::print() const
{
  cout << "name: " << name << endl;
}

void Dog::print() const
{
  Pet::print();
  cout << "breed: " << breed << endl;
}

int main()
{
  Dog dog;

  dog.name = "Tiny";
  dog.breed = "Great Dane";

  Pet pet;
  pet = dog;
  //dog = pet;

  // Following line is illegal
  //cout << pet.breed << endl;
  pet.print();
  //dog.print();

  return 0;
}