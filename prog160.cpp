#include<iostream>
#include<unistd.h>
#include<string.h> 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


using namespace std;

class MarvellousFile
{
    public:
   char fname[30];
   int fd;
    
    MarvellousFile(char *Name)
    {
        strcpy(fname,Name);
        fd=open(fname,O_RDWR);
    }

     ~MarvellousFile()
    {
        close(fd);
    }

    void Display()
    {
        int iRet=0;
        char Buffer[10];
        lseek(fd,0,0);

          cout<<"data from file is : \n";
            while ((iRet=read(fd,Buffer,10))!=0)
            {
                write(1,Buffer,iRet);
            }

            cout<<"\n";
    }


    int CountCapital()
    {
         int iRet=0,iCount=0,i=0;
        char Buffer[10];
        lseek(fd,0,0);

          cout<<"data from file is : \n";
            while ((iRet=read(fd,Buffer,10))!=0)
            {
               for(i=0;i<iRet;i++)
               {
                   if((Buffer[i]>='A') && (Buffer[i]<='Z'))
                   {
                       iCount++;
                   }
               }
            }
            return iCount;
    }

        int CountSmall()
    {
         int iRet=0,iCount=0,i=0;
        char Buffer[10];
        lseek(fd,0,0);

          cout<<"data from file is : \n";
            while ((iRet=read(fd,Buffer,10))!=0)
            {
               for(i=0;i<iRet;i++)
               {
                   if((Buffer[i]>='a') && (Buffer[i]<='z'))
                   {
                       iCount++;
                   }
               }
            }
            return iCount;
    }


   int CountDigit()
    {
         int iRet=0,iCount=0,i=0;
        char Buffer[10];
        lseek(fd,0,0);

          cout<<"data from file is : \n";
            while ((iRet=read(fd,Buffer,10))!=0)
            {
               for(i=0;i<iRet;i++)
               {
                   if((Buffer[i]>='0') && (Buffer[i]<='9'))
                   {
                       iCount++;
                   }
               }
            }
            return iCount;
    }

     int CountWhitspaces()
    {
         int iRet=0,iCount=0,i=0;
        char Buffer[10];
        lseek(fd,0,0);

          cout<<"data from file is : \n";
            while ((iRet=read(fd,Buffer,10))!=0)
            {
               for(i=0;i<iRet;i++)
               {
                   if(Buffer[i]>=' ')
                   {
                       iCount++;
                   }
               }
            }
            return iCount;
    }


    int CountSize()
    {
         int iRet=0;
        char Buffer[10];
        
        iRet=lseek(fd,0,2);
          
        return iRet;
    }

    
};

int main()
{
    char fName[30];
    int iRet=0;

    cout<<"enter the file name \n";
    cin>>fName;

    MarvellousFile obj(fName);


    obj.Display();

    iRet=obj.CountCapital();
    cout<<"Number of Capital Lettera are : "<<iRet<<"\n";

    iRet=obj.CountSmall();
    cout<<"Number of small Lettera are : "<<iRet<<"\n";

    iRet=obj.CountDigit();
    cout<<"Number of Digit are : "<<iRet<<"\n";

      iRet=obj.CountWhitspaces();
    cout<<"Number of Whitespaces : "<<iRet<<"\n";

        iRet=obj.CountSize();
    cout<<"Size of file : "<<iRet<<"\n";
   
    return 0;
}