#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>



class Digit
{
    public:
     int Reverse(int iNo)
     {
        int idigit=0;
        static int iNum=0;
        if(iNo!=0)
        {
            idigit = (iNo%10);
            iNum = (iNum*10) + idigit;
            iNo = iNo / 10;
            Reverse(iNo);
        }
        return iNum;
     }
   

};



int main()
{
   int ivalue;

   cout<<"Enter the number\n";
   cin>>ivalue;

   Digit obj;
   int iRet= obj.Reverse(ivalue);
   cout<<"Rverse number is  :"<<iRet<<"\n";

   return 0;
}