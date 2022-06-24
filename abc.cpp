#include <iostream>
using namespace std;


class Demo
{
public:
    int x;
    int y;
     Demo *ptr;   

       void fun()
     {
         cout<<"inside base fun";
     }
   
};

class hello:public Demo
{
 public:


 void fun()
 {
    cout<<"inside hello fun\n";
 }

};

int main()
{
   
    Demo ptr.fun();
    return 0;
}
