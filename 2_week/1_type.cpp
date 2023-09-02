#include <iostream>

using namespace std;

int main()
{
    size_t short_size = sizeof(short);
    size_t int_size = sizeof(int);
    size_t long_size = sizeof(long);
    size_t float_size = sizeof(float);
    size_t double_size = sizeof(double);
    size_t long_double_size = sizeof(long double);
    size_t char_size = sizeof(char);
    size_t bool_size = sizeof(bool);
    size_t int16_size = sizeof(int16_t);
    size_t uint32_size = sizeof(uint32_t);
    size_t int64_size = sizeof(int64_t);
    size_t longlong_size = sizeof(long long);

    cout << short_size << "(short) " << int_size << "(int) " << long_size << "(long) " << float_size << "(float) " << double_size << "(double) " << long_double_size << "(long double) " << char_size << "(char) " << bool_size << "(bool) " << int16_size << "(int16) " << uint32_size << "(unit32) " << int64_size << "(int64) " << longlong_size << "(long long) " << endl; 
    return 0;
}