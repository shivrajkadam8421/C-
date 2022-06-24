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

     UINT ToggleBit(UINT iNo)
    {
         UINT iResult=0;
         UINT iMask=0xf000000f;
         
         iResult=(iNo ^ iMask);
         return iResult;
    }
};



int main()
{
  UINT iValue=0,ipos1=0,ipos2=0;
  UINT iRet=0;

   Bit obj;
   cout<<"enter the number"<<"\n";
   cin>>iValue;

  iRet=obj.ToggleBit(iValue);
   cout<<"updated number is: "<<iRet<<"\n";

    return 0;
}