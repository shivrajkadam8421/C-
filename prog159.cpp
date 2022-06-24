#include<iostream>
using namespace std;

class Addition
{
   public:
    int AdditionNum (int iNo1,int iNo2)
    {
       return (iNo1+iNo2);
    }
};


int main()
{
    int iNum1=0,iNum2=0,iRet=0;
    cout<<"enter the first number"<<"\n";
    cin>>iNum1;
    cout<<"enter the second number"<<"\n";
    cin>>iNum2;

     Addition obj;
     iRet=obj.AdditionNum(iNum1,iNum2);
     cout<<"Addition is : "<<iRet<<"\n";
     
    return 0;
}