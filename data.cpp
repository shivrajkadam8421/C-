
#include<iostream>
using namespace std;

class Array
{
 private:
   int *ptr;
   int size;
 public:
   Array(int no=5)     //constructor
   {
    cout<<"constructor\n";   
    this->size=no;
    this->ptr=new int[size];
    }
    Array(Array &ref)  //copy constrctor
    {    
        int icnt=-0;
        this->size=ref.size;
       this->ptr= new int[size];
       for(icnt=0;icnt<size;icnt++)
       {
           ptr[icnt]=ref.ptr[icnt];
       }

    } 
   ~Array()       //destructor
   { 
       cout<<"destructor\n";
       delete []ptr;
   }
   
   int Accept()  //Accept(Array *const this)
   {
       int icnt=0;
       cout<<"enter the elements\n";
       for(icnt=0;icnt<size;icnt++)
       {
           cin>>ptr[icnt];
       }
   }
   void addition()  //addition(Array *const this)
   {
     int sum=0,icnt=0;
     for(icnt=0;icnt<size;icnt++)
     {
         sum=sum + ptr[icnt];
     }
     cout<<"addition of number are:"<<sum<<"\n";
   }

    void bignum()      // bignum(Array * const this)
    {
        int icnt=0;
       int bnum=ptr[icnt];
       for(icnt=0;icnt<size;icnt++)
       {
        if(bnum<=ptr[icnt])
        {
            bnum=ptr[icnt];
        }
       }
      cout<<"big number are:"<<bnum<<"\n";
    }


   
   void display()  //Display(Array *const this)
   {
       int icnt=0;
       cout<<"elements are\n";
       for(icnt=0;icnt<size;icnt++)
       {
           cout<<ptr[icnt]<<"\n";
       }
   }
   
   
   
};  //end of class declaration
int main()
{
    cout<<"inside main\n";
    int value=0;
    cout<<"number of elements\n";
    cin>>value;
    Array *obj=new Array(value);
    obj->Accept();  //Accept(&obj) Accpetr(100)
    obj->display();
    obj->addition();
    obj->bignum();
    delete obj;
  Array*obj1=new Array (value);
    Array *obj2(obj1);
    Array *obj3(obj2);
    obj3->Accept();
    obj3->display();
    delete obj1;
    delete obj2;  
        delete obj3;
    return 0;   
    
}