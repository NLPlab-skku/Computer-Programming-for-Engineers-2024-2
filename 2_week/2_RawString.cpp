#include <iostream>

using namespace std;

int main()
{
    string s1 = R"(\t\\t\n)";
    cout << s1 << " (s1)" << endl;

    string s2 = "\t\\t\n";
    cout << s2 << " (s2)" << endl;

    string s3 = R"(..\1-class\)";
    cout << s3 << " (s3)" << endl;

    string s4 = "..\\1-class\\";
    cout << s4 << " (s4)" << endl;

    return 0;
}