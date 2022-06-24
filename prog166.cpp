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

     UINT ToggleRange(UINT iNo,UINT ipos1,UINT ipos2)
    {
         UINT iMask=0x1,iMax=0,i=0,iResult=0;
         if(ipos1<ipos2)
         {
             iMax=ipos2-ipos1;
             iMask=iMask<<(ipos1-1);
         }
         else
         {
             iMax=ipos1-ipos2;
             iMask=iMask<<(ipos2-1);
         }

         for(i=1;i<iMax;i++)
         {
             iResult=(iNo ^ iMask);
             iMask=iMask<<1;
         }
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

   cout<<"enter the first position";
   cin>>ipos1;

   cout<<"enter the second positionb";
   cin>>ipos2;

  iRet=obj.ToggleRange(iValue,ipos1,ipos2);
   cout<<"updated number is: "<<iRet<<"\n";

    return 0;
}