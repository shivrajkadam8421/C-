#include<iostream>
using namespace std;

class Digit
{
    public:
    int SumDigit(int iNo)
    {
       int idigit=0;
       static int isum=0;

       if(iNo!=0)
       {
          idigit = (iNo%10);
          isum = isum + idigit;
          iNo = iNo / 10;
          SumDigit(iNo);
       }
       return isum;
    }
};



int main()
{
   int ivalue=0;
   cout<<"Enter the umber\n";
   cin>>ivalue; 

    Digit obj;
    int iRet = obj.SumDigit(ivalue);
    cout<<"Sum of digit is : "<<iRet<<"\n";

   return 0;
}