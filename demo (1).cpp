
#include<stdio.h>
 void fun()                     // 1000
 {
   printf("Iniside fun");
 }
 
  int add(int no1,int no2)      // 2000
 {
   int ans = 0;
   ans = no1+no2;

   return ans;
 }
  
 struct demo
 {
   void (*p)();
   int (*q)(int,int);
 }obj;
 
 int main()
 {
   int ret = 0;
   obj.p = fun;
   obj.q = add;
   ret = obj.q(6,5);        // obj.add(6,5)
   printf("%d",ret);
   obj.p();                     // obj.fun();
   return 0;
 }

