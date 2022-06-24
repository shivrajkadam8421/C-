#include<iostream>
using namespace std;

class Display
{
    public:
    void Displaystar()
    {
      static int i=0;
       if(i!=5)
       {
          cout<<"*\t";
          i++;
          Displaystar();
       }
    }
};



int main()
{
    Display obj;
  obj.Displaystar(); 
   return 0;
}