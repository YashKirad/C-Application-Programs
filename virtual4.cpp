#include<iostream>
using namespace std;
class Base
{
   public:
       int x,y;

   virtual void fun()
   {
     cout<<"Base fun"<<"\n";
   }

   void gun()
   {
       cout<<"Base gun"<<"\n";
   }
};

class Derived : public Base
{
     public:
         int i,j; 

   void sun()
   {
       cout<<"Derived sun"<<"\n";
    }

   void fun()
   {
     cout<<"Derived fun"<<"\n";
   }    
};
    int main()
{
   Base*bp=new Derived();     		//upcasting
   bp->fun();          			//base   fun
  bp->gun();			//base   gun
 // bp->sun();			//not allowed
			
cout<<"size of Base :"<<sizeof (Base)<<"\n";

cout<<"size of Derived :"<<sizeof (Derived)<<"\n";
  return 0;
}
