#include <iostream>  
using namespace std;

class DayOfYear
{
  public:
    DayOfYear();
    DayOfYear(int, int);

    DayOfYear( const DayOfYear& other )
    {
      cout << "In the copy constructor " << endl ;
      this->month = other.month;
      this->day = other.day;
    }
    void output();
  private:
    int month;
    int day;
};

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
  DayOfYear birthday(1,26);
  DayOfYear firstday(birthday);

  birthday.output();
  firstday.output();

  return 0;
}