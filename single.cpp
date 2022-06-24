#include <iostream>
using namespace std;

class Base
{
public:
    int x,y;
    Base()
    {   cout<<"Base constructor\n";  }
    ~Base()
    {   cout<<"Base destructor\n";  }
    void fun()
    {   cout<<"Inside fun\n";   }
};
class Derived : public Base         // Single level inheritance
{
public:
    int a,b;
    Derived()  {   cout<<"Derived constructor\n";  }
    ~Derived()  {   cout<<"Derived destructor\n" ; }
    void gun()
    {   cout<<"Inside gun\n";   }
};

int main()
{
    Base bobj;
    //Derived dobj;
    //dobj.fun();
    return 0;
}
