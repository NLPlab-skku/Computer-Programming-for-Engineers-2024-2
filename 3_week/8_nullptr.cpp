#include<iostream>
using namespace std;
 
int main(void) {
     // NULL, nullptr 비교2
    cout << endl << "== NULL, nullptr 비교2" << endl;
    int* ptr1 = NULL;
    int* ptr2 = nullptr;
 
    if (ptr1 == NULL) { cout << "2-1. NULL == NULL" << endl; }
    if (ptr2 == NULL) { cout << "2-2. nullptr == NULL" << endl; }
    if (ptr1 == nullptr) { cout << "2-3. NULL == nullptr" << endl; }
    if (ptr2 == nullptr) { cout << "2-4. nullptr == nullptr" << endl; }
    if (ptr1 == ptr2) { cout << "2-5. NULL == nullptr" << endl; }
  
    // NULL, nullptr 비교3
    cout << endl << "== NULL, nullptr 비교3" << endl;
    int a = 0; 
    if (a == NULL) { cout << "3-1. int 타입 0 == NULL" << endl; }
    //if (a == nullptr) { cout << "3-2. int 타입 0 == nullptr" << endl; } 
 
    return 0;
}
