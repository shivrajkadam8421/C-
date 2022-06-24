#include <iostream>
using namespace std;

class Hello
{
public:
    int x;
    int *ptr1;

    Hello(int isize=5)
    {
          this->x=isize;
     
     

        cout<<"inside Hello constructor\n";
    }
    ~Hello()
    {
         delete []ptr1;
        cout<<"inside hello destructor\n";
    }
    Hello(Hello &ref)
    {
        this->x=ref.x;
          ptr1=new int [x];
        cout<<"inside Hello copy constructor\n";

       
    }
  
    void fun()
    {
        cout<<"Inside fun\n";
    }
};
class Demo
{
public:
    int iNo;
    int *ptr;
    Hello hobj;     //composition

   Demo(int y=3)
   {
      iNo=y;
       cout<<"inside demo constructor\n";

   }
   ~Demo()
   {
       
       cout<<"inside demo destrctor\n";
   }
   Demo(Demo &ref)
   {
       cout<<"inside demo copy\n";
   }
    void gun()
    {
        cout<<"Inside gun\n";
    }
};

int main()
{
        Demo dobj;
    Demo hobj(dobj);
    return 0;
}
