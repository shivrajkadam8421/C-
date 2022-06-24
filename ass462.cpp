#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>



class Digit
{
    public:
     int LargeDigit(int iNo)
     {
        int idigit=0;
        static int ilarge=0;
        if(iNo!=0)
        {
            idigit = (iNo%10);
            if(ilarge < idigit)
            {
               ilarge = idigit;
            } 
            iNo = iNo / 10;
            LargeDigit(iNo);
        }
        return ilarge;
     }
   

};



int main()
{
   int ivalue;

   cout<<"Enter the number\n";
   cin>>ivalue;

   Digit obj;
   int iRet= obj.LargeDigit(ivalue);
   cout<<"Largest digit from number is  :"<<iRet<<"\n";

   return 0;
}