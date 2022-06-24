#include<iostream>
using namespace std;

class Display
{
    public:
    void display(int iNo)
    {
      static char ch='A';
      static int i=0;
       if(i!=iNo)
       {
          cout<<ch<<"\t";
          ch++;
          i++;
          display(iNo);
       }
    }
};



int main()
{
   int ivalue=0;
   cout<<"Eneter the umber\n";
   cin>>ivalue; 

    Display obj;
  obj.display(ivalue); 
   return 0;
}