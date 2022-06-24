#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>



class WhiteSpaces
{
    public:
     int CntWhitespaces(char *brr)
    {
     
     if(brr==NULL)
     {
        return -1;
     }
     static int iCount=0;
     if(*brr!='\0')
     {
        if(*brr == ' ')
        {
            iCount++;
        }
        brr++;
       CntWhitespaces(brr);
     }
     return iCount;
     
    }
   

};



int main()
{
   char Str[50];

   cout<<"Enter the string\n";
   scanf("%[^'\n']S",Str);

   WhiteSpaces obj;
   int iRet= obj.CntWhitespaces(Str);
   cout<<"Number of whitespaces are :"<<iRet<<"\n";

   return 0;
}