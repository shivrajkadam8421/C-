using namespace std;
#include<iostream>

 class demo
 {
     public:
      int no1;
      int no2;


      demo(int x,int y)
      {
          cout<<"para";
          no1=x;
          no2=y;
      }
 }
int main()
{
   
    demo obj(10);

    return 0;
}