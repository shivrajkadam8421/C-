#include<iostream>
using namespace std;

class Display
{
    public:
    void display()
    {
      static char ch='A';
      static int i=0;
       if(i!=6)
       {
          cout<<ch<<"\t";
          ch++;
          i++;
          display();
       }
    }
};



int main()
{
    Display obj;
  obj.display(); 
   return 0;
}