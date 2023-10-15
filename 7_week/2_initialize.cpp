#include <iostream>
using namespace std;

class DayOfYear
{
  public:
    DayOfYear(int, int);
    void output();
  private:
    int month = 1;
    int day = 1;
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(2), day(2)
{
  cout << "In the constructor DayOfYear(" << monthValue;
  cout << "," << dayValue << ")" << endl;
  month = monthValue;
  day = dayValue;
}

void DayOfYear::output()
{  
  cout << "month : " << month << endl;  
  cout << "day : " << day << endl;
}

int main()
{
  DayOfYear christmas(12,25);
  // What is the result? What does it mean?
  christmas.output();
  return 0;
}