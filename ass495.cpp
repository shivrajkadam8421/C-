#include<iostream>
using namespace std;

class recursive
{
    public :
   
    int ProductDigit(int iNo)
    {
       int idigit=0;
       static int imult=1;
       if(iNo!=0)
       {
          idigit = (iNo%10);
          imult = imult * idigit;
          iNo = iNo / 10;  
          ProductDigit(iNo);
       }
       return imult;
    } 
};
 

int main()
{
   int ivalue = 0;
   cout<<"Enter the number\n";
   cin>>ivalue;

   recursive obj;
   int iRet = obj.ProductDigit(ivalue);
   cout<<"Product of digit : "<<iRet<<"\n";

   return 0;
}