#include<iostream>
using namespace std;

class Display
{
    public:
    void Displaystar(int iNo)
    {
      static int i=0;
       if(i!=iNo)
       {
          cout<<"*\t";
          i++;
          Displaystar(iNo);
       }
    }
};



int main()
{
   int ivalue=0;
   cout<<"How many stars\n";
   cin>>ivalue; 

    Display obj;
  obj.Displaystar(ivalue); 
   return 0;
}