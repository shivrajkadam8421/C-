#include<iostream>
using namespace std;

class StringX
{
    public:
    int strlenX(char *str)
    {
        if(str == NULL)
        {
           return -1;
        }
        static int icnt=0;
        if(*str != '\0')
        {
           icnt++;
           if(*str == ' ')
           {
              icnt--;
           }
           str++;
           strlenX(str);
        }
        return icnt;
    }
};
 

int main()
{
   char str[50];
   cout<<"Enter the string\n";
   scanf("%[^'\n']s",str);

   StringX obj;
   int iRet = obj.strlenX(str);
   cout<<"Length of string is :"<<iRet<<"\n";    

 
   return 0;
}