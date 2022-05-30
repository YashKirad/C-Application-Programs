#include<iostream>
using namespace std;

  class Demo
{
     public:
         int i,j;
         static int x;
     
     Demo()
      {
         cout<<"Inside Default Constructor\n";
          i=10;
          j=20;
      }
      ~Demo()
      {
          cout<<"Inside Destructor\n";
      }
};
     int Demo::x=30;
  
     int main()
{
     cout<<Demo::x<<"\n";                     //startter   will be served first 	 
  
   Demo obj1;                             //main course   will be served after the first
   
    Demo  obj2;
   
    cout<<sizeof(obj1)<<"\n";	//8
   cout<<sizeof(obj2)<<"\n";	//8

   cout<<obj1.i<<"\n";
   cout<<obj2.i<<"\n";  
  return 0;
}