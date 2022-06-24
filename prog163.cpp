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

     UINT ToggleBit(UINT iNo,UINT ipos1,UINT ipos2)
    {
        int iResult=0;
         int iMask1=0x1,iMask2=0x1;
         iMask1=iMask1<<(ipos1-1);
         iMask2=iMask2<< (ipos2-1);
         int iMask=(iMask1 | iMask2);

          iResult=(iNo ^ iMask);      
         return iResult;
    }
};



int main()
{
  int iValue=0,ipos1=0,ipos2=0;
  UINT iRet=0;

   Bit obj;
   cout<<"enter the number"<<"\n";
   cin>>iValue;

   cout<<"enter the first position";
   cin>>ipos1;

   cout<<"enter the second positionb";
   cin>>ipos2;


  iRet=obj.ToggleBit(iValue,ipos1,ipos2);
   cout<<"updated number is: "<<iRet<<"\n";

    return 0;
}