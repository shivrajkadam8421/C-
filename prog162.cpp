#include<iostream>
using namespace std;
typedef unsigned int UINT;

/*
op1  op2  &   |   ^

1     0   0   1   1
0     1   0   1   1
1     1   1   1   0
0     0   0   0   0

*/

class Bit
{
    public:

     UINT CountONBit(UINT iNo)
    {
        int iCount=0,i=0;
         int iMask=0x1;

        for(i=0;i<32;i++)
        {
         if((iNo & iMask)==iMask)
         {
            iCount++;
         }
         iMask=(iMask<<1);
        }
         return iCount;
    }
};



int main()
{
  int iValue=0,ipos=0;
  UINT iRet=0;

   Bit obj;
   cout<<"enter the number"<<"\n";
   cin>>iValue;

  iRet=obj.CountONBit(iValue);
   cout<<"ON bit are : "<<iRet<<"\n";

    return 0;
}