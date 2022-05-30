#include<iostream>
using namespace std;
  
 class Demo
{
   public:
     int x;  //charachteristics
     int y;  //charachteristics

 Demo(int a=10,int b=20)  //constructor
   {
     x=a;
     y=b;
   }

 // void (Demo *this,int no)
 void fun(int no)             //1000   
    { 
       cout<<Inside Fun<<"\n";
    }
   
};
   int main()
{
  
  Demo obj(11,21);

  obj.fun(51);

  return 0; 
}