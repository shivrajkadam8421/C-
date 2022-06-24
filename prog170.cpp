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

     UINT ToggleONRange(UINT iNo,UINT ipos1,UINT ipos2)
    {

         return (iNo ^ ((0xffffffff<<(ipos1-1)) & (0xffffffff>>(32-ipos2))));


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

  iRet=obj.ToggleONRange(iValue,ipos1,ipos2);
   cout<<"updated number is: "<<iRet<<"\n";

    return 0;
}