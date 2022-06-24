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
class Derived : public Base         // Multilevel inheritance
{
public:
    int a,b;
    Derived()  {   cout<<"Derived constructor\n";  }
    ~Derived()  {   cout<<"Derived destructor\n" ; }
    void gun()
    {   cout<<"Inside gun\n";   }
};
class Myderived : public Derived
{
public:
    int data;
    Myderived()  {   cout<<"Myderived constructor\n";  }
    ~Myderived()  {   cout<<"Myderived destructor\n" ; }
    void sun()
    {   cout<<"Inside sun\n";   }
}

int main()
{
    Myderived obj;
    return 0;
}
