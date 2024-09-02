#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
        void move() { cout << "Vehicle: move" << endl;}
};

class Car: public Vehicle
{
    public:
        void move() { cout << "Car: move with 4 wheels" << endl;}
};

class Bicycle: public Vehicle
{
    public:
        void move() { cout << "Bicycle: move with 2 wheels" << endl;}
}; 

int main(void)
{
    Vehicle vehicle;
    vehicle.move();

    Car car;
    car.move();

    Bicycle bicycle;
    bicycle.move();

    return 0;
}