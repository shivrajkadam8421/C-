#include<iostream>
using namespace std;

class Display
{
    public:
    void DisplayNum(int iNo)
    {
      static int i=1;
       if(i<=iNo)
       {
          cout<<i<<"\t";
          i++;
          DisplayNum(iNo);
       }
    }
};



int main()
{
   int ivalue=0;
   cout<<"Eneter the number\n";
   cin>>ivalue;
    Display obj;
  obj.DisplayNum(ivalue); 
   return 0;
}