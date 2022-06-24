#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>



class Digit
{
    public:
     int SmallDigit(int iNo)
     {
        int idigit=0;
        static int ismall=(iNo%10);
        if(iNo!=0)
        {
            idigit = (iNo%10);
            if(ismall > idigit)
            {
               ismall = idigit;
            } 
            iNo = iNo / 10;
            SmallDigit(iNo);
        }
        return ismall;
     }
   

};



int main()
{
   int ivalue;

   cout<<"Enter the number\n";
   cin>>ivalue;

   Digit obj;
   int iRet= obj.SmallDigit(ivalue);
   cout<<"Smallest digit from number is  :"<<iRet<<"\n";

   return 0;
}