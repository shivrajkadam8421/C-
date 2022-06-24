#include <iostream>
using namespace std;

class Demo
{
public:
    int i;
    const int j;        // constant characteristics
    
    Demo() :i(0), j(0)   // Member initialisation list
    {
        cout<<"Default\n";
    }
    Demo(int x, int y) :i(x), j(y)
    {
        cout<<"Parametrised\n";
    }
};



int main()
{
    Demo obj1;
    //obj1.j++;      // Error
    Demo obj2(11,21);
    //obj2.j++;      // Error
    return 0;
}
