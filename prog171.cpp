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

     void DisplayByte(UINT iNo)
    {
    
        UINT byte1=iNo & 0x000000ff;

        UINT byte2=iNo & 0x0000ff00;
        byte2=byte2>>8;

        UINT byte3=iNo & 0x00ff0000;
        byte3=byte3>>16;

        UINT byte4=iNo & 0xff000000;
        byte4=byte4>>24;

        cout<<"Byte1 = "<<byte1<<"\n";
        cout<<"Byte2 = "<<byte2<<"\n";
        cout<<"Byte3 = "<<byte3<<"\n";
        cout<<"Byte4 = "<<byte4<<"\n";

    }
};



int main()
{
  UINT iValue=0;
  UINT iRet=0;

   Bit obj;
   cout<<"enter the number"<<"\n";
   cin>>iValue;

   obj.DisplayByte(iValue);
  

    return 0;
}