#include<iostream>
using namespace std;
class Demo
{
    public:
       int i;  
        const int j;		//not a good programming practice but it works

     Demo() : j(20)		//member initialzation 
    {
       i=10;
     //  j=10;
    }
};
  int main()
{
    Demo obj;
 cout<<obj.i<<"\n";
 cout<<obj.j<<"\n";
   return 0;
}