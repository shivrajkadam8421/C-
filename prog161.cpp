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

     UINT ToggleBit(UINT iNo,UINT ipos)
    {
        int iResult=0;
         int iMask=0x1;
         if((ipos<1) || (ipos>32))
         {
             return 0;
         }
         iMask=(iMask<<(ipos-1));

         iResult=(iNo ^ iMask);

         return iResult;
    }
};



int main()
{
  int iValue=0,ipos=0;
  UINT iRet=0;

   Bit obj;
   cout<<"enter the number"<<"\n";
   cin>>iValue;

   cout<<"eneter the position"<<"\n";
   cin>>ipos;

   
  iRet=obj.ToggleBit(iValue,ipos);
   cout<<"updated number is : "<<iRet<<"\n";

    return 0;
}