#include <iostream>
//using namespace std;

namespace A{
void printAll() {
    std::cout << "printAll A 함수" << std::endl;
}
}

namespace B{
void printAll() {
    std::cout << "printAll B 함수" << std::endl;
}
}

int main(void)
{
    //printAll 함수 호출
    A::printAll();
    B::printAll();

    return 0;
}