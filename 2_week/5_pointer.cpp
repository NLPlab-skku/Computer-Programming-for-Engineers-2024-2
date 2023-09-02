#include <iostream>

using namespace std;

int main()
{
    int* p = NULL;
    int i = 10;
    p = &i;

    cout << "Storage address of variable i :" << &i << endl;
    cout << "Value of pointer p :" << p << endl;
    cout << "Reference value of pointger p :" << *p << endl;

    return 0;
}