#include <iostream>
using namespace std;

class Hello
{
public:
    void fun();
    void gun();
};
class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 10; j = 20; k =30;
        }
    friend class Hello;
};
void Hello::gun()      // object oriented function
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;  // Error
    cout<<obj.k<<endl;  // Error
}
void Hello::fun()      // object oriented function
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;  // Error
    cout<<obj.k<<endl;  // Error
}
int main()
{
    Hello hobj;
    hobj.fun();
    return 0;
}
