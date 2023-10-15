#include <iostream>
using namespace std;

class Nara
{
public :
 char name[20];   // 공개 멤버 변수
 char soodo[20];  // 공개 멤버 변수
 int ingoo;         // 공개 멤버 변수
};

void Showdata(const Nara &s) // 전달되는 인자를 참조자로 받고 있음.
{
 cout << " *** 국가 정보 *** " << endl;
 cout << " 국가 이름 : " << s.name << endl;
 cout << " 수도  : " << s.soodo << endl;
 cout << " 인구  : " << s.ingoo << endl;
}

int main(void)
{
 Nara country;  

 cout << " 국가 이름 : ";
 cin >> country.name;

 cout << " 수도  : " ;
 cin >> country.soodo;

 cout << " 인구  : ";
 cin >> country.ingoo;

 Showdata(country);

 return 0;
}