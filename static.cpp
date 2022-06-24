#include <iostream>
using namespace std;

class Demo
{
public:
    // Charcateristics
    int x,y,z;                  // non static characteristics
    static int no;             // static characteristics
    // Behaviour
    // void fun(Demo * const this)
    void fun()              // non static behaviour
    {
        cout<<"Inside non static fun\n";
        cout<<x;
        cout<<no;
    }
    // static void gun()
    static void gun()       // static bahaviour
    {
        cout<<"Inside static gun\n";
        // cout<<x;
        cout<<no;
    }
    Demo(int a = 10, int b = 20, int c = 30)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }
};
int Demo::no = 51;
int main()
{
    cout<<"Value of no : "<<Demo::no<<"\n";
    Demo::gun();        // Demo::gun()
    Demo obj1(1,2,3);
    Demo obj2(11,22,33);
    obj1.fun();         // fun(&obj);
    cout<<"Size of object is : "<<sizeof(obj1)<<"\n";
    return 0;
}
