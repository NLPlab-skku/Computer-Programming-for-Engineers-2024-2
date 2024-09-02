#include <iostream>
using namespace std;

void swap(int a, int b);

int main()
{
    int val1 = 10;
    int val2 = 20;
    swap(val1, val2);

    cout<<"val1 : "<<val1<<endl;
    cout<<"val2 : "<<val2<<endl;

    return 0;
}

void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
}