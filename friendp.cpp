#include <iostream>
using namespace std;


class Demo
{
public:
    int x;
    int y=0;
    Demo()
    {
        x = 10;
    
    }
friend void fun();
   
};
 void fun()
 {
    cout<<y;.
     cout<<"inside fun\n";
 }


int main()
{
    Demo obj;
    Demo *ptr=&obj;
    fun();
  
    return 0;
}
