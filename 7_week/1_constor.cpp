#include <iostream>
using namespace std;

class DayOfYear
{
public:
	// Constructor initializes month and day
    DayOfYear( int monthValue, int dayValue );
    void output();
private:
    int month;
    int day;
};

int main()
{
  DayOfYear christmas(12,25);
  christmas.output();

  //int month = 5;
  int month(5);
  //int* day =11;
  int* day = new int(11);
  
  DayOfYear* birthday = new DayOfYear(month, *day);
  birthday->output();
}

DayOfYear::DayOfYear(int monthValue, int dayValue)
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



