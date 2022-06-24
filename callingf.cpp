#include<iostream>
using namespace std;

void fun(int x) //call by value 
{
   x++;
}

void gun(int *p)      //call by address 
{
  (*p)++;
}

void sun(int &ref)       // call by reference
{
   ref++;
}


int main()
{
   int a=10,b=10,c=10; //address of b is 920
   //////////////////call by value////////////////////////
   cout<<"before call function\t"<<a<<"\n"; //10
   fun(a);
   cout<<"After call function\t"<<a<<"\n";  //10
////////////////////call by address//////////////////////////
    cout<<"\nbefore call gun function\t"<<b<<"\n"; //10
   gun(&b);      //gun(920)
   cout<<"After call gun function\t"<<b<<"\n";  //11
////////////////////call by reference///////////////////////////////
    cout<<"\nbefore call sun function\t"<<c<<"\n"; //10
   sun(c);      //sun(c)
   cout<<"After call sun function\t"<<c<<"\n";  //11
///////////////////////////////////////////////////////
   return 0;

}