#include<iostream>
using namespace std;


class base1
{
    public:
      int a,b;

      base1(int a,int b)
      { 
         cout<<"inside base1 constructor\n";
        this->a=a;
        this->b=b;
        cout<<this->a<<"\n";
        cout<<this->b<<"\n";
      }
      ~base1()
      {
         cout<<"inside base1 destructor\n";
      }

    
};

class base2:public base1
{
   public:
    int x,y;

    base2(int x,int y,int a,int b):base1(a,b)
    {
         cout<<"inside base2 constructor\n";
        this->x=x;
        this->y=y;
        cout<<this->x<<"\n";
        cout<<this->y<<"\n";
    }
   ~ base2()
    {
        cout<<"inside base2 destructor\n";
    }
};


class derived:public base2
{
   public:
     int data;

     derived(int data,int x,int y,int a,int b): base2(x,y,a,b)
     {
         cout<<"inside derived constructor\n";
         this->data=data;
        
         cout<<this->data<<"\n";

     }

     ~derived()
     {
         cout<<"inside derived destructor\n";
     }
};



int main()
{

    cout<<"inside main\n";
    derived dobj(10,20,30,40,50);
}