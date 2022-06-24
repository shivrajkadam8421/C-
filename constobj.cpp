#include<iostream>
 using namespace std;

 class demo
 {
     public:
     int i;
     int j;

     demo()
     {
         i=0;
         j=0;
        cout<<"default\n";
     }
     demo(int x,int y)
     {
         i=x;j=y;
         cout<<"parametersied\n";
     }
     void fun()
     {
         cout<<"fun";
     }
     void gun(int a) const
     {
         a++;
         int no=10;
         no++;
     }

 };


 int main()
 {
     const demo obj(10,20);
   //demo obj1(10,20);
     obj.fun();
     obj.gun(20);
    // obj1.i++;

     
     return 0;
 }