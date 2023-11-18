#include <iostream>
using namespace std;

class Parent
{
  public:
    virtual void function_1(){
        printf("this is Parent function_1\n");
    }

    virtual void function_2(){
        printf("this is Parent function_2\n");
    }

    virtual void function_3(){
        printf("this is Parent function_3\n");
    }

    void function_4(){
        printf("this is Parent function_4\n");
    }
};

class Child : public Parent
{
  public:
    virtual void function_1(){
        printf("this is Child function_1\n");
    }

    virtual void function_3(){
        printf("this is Child function_3\n");
    }
};

int main()
{
    Parent *p = new Parent;
    Parent *c = new Child;
    Child *cc = new Child;

    p->function_1();
    c->function_1();
    c->function_2();
    c->function_4();
    cc->function_3();

    return 0;
}
