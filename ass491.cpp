#include<iostream>
using namespace std;

class Display
{
    public:
    void DisplayRevNum(int iNo)
    {
      static int i=iNo;
       if(i!=0)
       {
          cout<<i<<"\t*\t";
          i--;
          DisplayRevNum(iNo);
       }
    }
};



int main()
{
   int ivalue=0;
   cout<<"Eneter the umber\n";
   cin>>ivalue; 

    Display obj;
  obj.DisplayRevNum(ivalue); 
   return 0;
}