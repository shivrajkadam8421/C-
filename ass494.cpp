#include<iostream>
using namespace std;

class recursive
{
    public :
   
    int Factorail(int iNo)
    {
       static int ifact=1;
       if((iNo/2)!=0)
       {
          ifact = ifact * iNo;
          iNo--;
          Factorail(iNo);
       }
       return ifact;
    } 
};
 

int main()
{
   int ivalue = 0;
   cout<<"Enter the number\n";
   cin>>ivalue;

   recursive obj;
   int iRet = obj.Factorail(ivalue);
   cout<<"Facorial of number : "<<iRet<<"\n";

   return 0;
}