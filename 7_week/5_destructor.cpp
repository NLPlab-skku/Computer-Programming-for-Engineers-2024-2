#include <iostream>  
using namespace std;

class DayOfYear
{
  public:
    DayOfYear() {month = 1; day = 1;}
    DayOfYear(int, int);
    ~DayOfYear();

    void output();
  private:
    int month;
    int day;
};

DayOfYear::~DayOfYear()
{
  cout << "Destructing " << endl;
  //output();
}

DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  cout << "2 In the constructor DayOfYear" << endl;
}

void DayOfYear::output()
{
  cout << "month : " << month << endl;
  cout << "day : " << day << endl;
}

int main()
{
  DayOfYear christmas(12,25);

  christmas.output();

  return 0;
}