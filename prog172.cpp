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

     UINT SwapByte(UINT iNo)
    {
       UINT iMask=0x00ff00;
       UINT iTemp=iNo & iMask; 
    
        UINT byte1=iNo << 24;
        UINT byte4=iNo >> 24;
        UINT iResult=(iTemp | byte1 | byte4);
       
         return iResult;
    }
};



int main()
{
  UINT iValue=0;
  UINT iRet=0;

   Bit obj;
   cout<<"enter the number"<<"\n";
   cin>>iValue;

   iRet=obj.SwapByte(iValue);
   cout<<"updated number is : "<<iRet<<"\n";
  

    return 0;
}