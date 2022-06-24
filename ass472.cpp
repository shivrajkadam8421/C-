#include<iostream>
using namespace std;

class Display
{
    public:
    void DisplayNum()
    {
      static int i=1;
       if(i<=5)
       {
          cout<<i<<"\t";
          i++;
          DisplayNum();
       }
    }
};



int main()
{
    Display obj;
  obj.DisplayNum(); 
   return 0;
}