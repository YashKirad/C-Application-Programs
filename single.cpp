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
 
   int main()
{
       Derived dobj;	
    
   
  return 0;
}