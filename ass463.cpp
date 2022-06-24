#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>



class Charcter
{
    public:
     int SmallCharacter(char * ptr)
     {
        if(ptr == NULL)
        {
           return -1;
        }
        else
        { 
          static int icnt=0;
           if(*ptr != '\0')
           {
              if((*ptr >= 'a') && (*ptr <= 'z'))
              {
                 icnt++;
              }
              ptr++;
              SmallCharacter(ptr);
           }
           return icnt;
        }
     }
   

};



int main()
{
   char str[50];
   cout<<"Enter the string";
   scanf("%[^'\n']S",str);


   Charcter obj;
   int iRet= obj.SmallCharacter(str);
   cout<<"Number of smallest charcter are   :"<<iRet<<"\n";

   return 0;
}