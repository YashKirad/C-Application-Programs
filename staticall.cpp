#include<iostream>
using namespace std;
   class Demo
{
    public:
         int i,j;		//Instance variable
      static int x; 	//Class variable
  
      Demo(int a=10,int b=20)  	//parameterised with default arguments
      {
         cout<<"Inside Constructor\n";
           // (*this).i = a;                 we can also write in this type
           this->i = a;
           this ->j = b;
      }
      ~Demo()
      {
         cout<<"Inside Destructor\n";
      }
     //void fun(Demo*this,int no) 
         void fun(int no)
     {
       cout<<"Inside nonstatic fun\n";
       cout<<this->i<<"\n";
       cout<<this->j<<"\n";
      }
      static void gun(int value)   
      {
         cout<<"Inside static gun\n";
         //cout<<this->i<<"\n";
      }
};
     int Demo::x=30;

       int main()
{
    
    cout<<Demo::x<<"\n";
    Demo::gun(11);
   return 0;
}