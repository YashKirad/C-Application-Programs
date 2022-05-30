#include<iostream>
using namespace std;

 class Base
{
     public:
        int i,j;
    
             Base()
           {
               cout<<"base constructor \n";
           }
           ~Base()
           {
               cout<<" base Destructor \n";
           }
         

};
 
 class Derived : public Base
    {
     public:
     int a,b,c;
        Derived()
     {
          cout<<" derived constructor \n";
    }
  ~Derived()
    {
          cout<<" derived destructor \n";
   }
     
 };
 
class Derived1 : public Derived
{ 
   public:
     int k,l;
       Derived1()
    {
       cout<<"Derived1 constructor\n ";
    }
 ~Derived1()
   {
     cout<<"Derived1 destructor\n";
   }

};

   int main()
{
   	
  // Derived dobj;   
   Derived1 d1obj;
  return 0;
}