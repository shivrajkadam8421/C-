#include<iostream>
using namespace std;

class Display
{
    public:
    void DisplayRevNum()
    {
      static int i=5;
       if(i>=1)
       {
          cout<<i<<"\t";
          i--;
          DisplayRevNum();
       }
    }
};



int main()
{
    Display obj;
  obj.DisplayRevNum(); 
   return 0;
}