#include <iostream>
using namespace std;

class Parent{
  public:
    void show()
    {
        printf("this is parent\n");
    }
};

class Child : public Parent{
  public:
    void show()
    {
        printf("this is child\n");
    }
};

class GrandChild : public Child{
  public:
    void show()
    {
        printf("this is grandchild\n");
    }
};

int main()
{
    Parent *p = new Parent;
    Child *c = new Child;
    GrandChild *gc = new GrandChild;

    p->show();
    c->show();
    gc->show();

    p = c;
    p->show();
    p = gc;
    p->show();

    return 0;
}