#include<iostream>
using namespace std;
class Base
{
   public:
       int x,y;
};

class Derived : public Base
{
     public:
         int i,j;     
};
    int main()
{
          
   //dynamic memory
    Base*bp=new Base();		//no casting
    Derived*dp=new Derived();      	//no casting

   Base*bp1=new Derived();		//upcasting          allowed
//   Derived*dp1=new Base();		//downcasting      not allowed for overriding   but concept is there.

  return 0;
}
