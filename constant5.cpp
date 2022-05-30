//constant   behaviour  is read only data  we cannot  change any data from any function

#include<iostream>
using namespace std;
class Demo
{
    public:
       int i;  
        const int j;				//constant charachteristics		

       Demo(int a,int b) : i(a) , j(b)
    {
      i=a;
    }

   void fun() 
  {
     cout<<"Inside fun\n";
        i++;			//allowed
    //  j++;			//not allowed 
  }
   //b is constant input argument
   void gun(int a,const int b)const		//constant behaviour function
   {
      int x = 10;				//constant local variable
      const int y = 20;
    
     cout<<"Inside gun\n";
     //i++;			//allowed
     //j++;			//not allowed
      x++;			//allowed	
      //y++;			//not allowed
    
       a++;			//allowed
      //  b++;			//not allowed
   }
};
  int main()
{

    Demo obj1(11,21);
    const Demo obj2(11,21);

   obj1.fun(); 
  obj1.fun(10,20);
  obj2.fun();
  obj2.fun(10,20);

   return 0;
}