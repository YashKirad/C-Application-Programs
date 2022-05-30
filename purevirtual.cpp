#include<iostream>
using namespace std;
class Base
{
   public:
       int x,y;
//1000  
     void fun()			//concrete non virtual
    { 
      cout<<"Base fun\n";
    }   
//2000    
    virtual void gun()			//concrete virtual
      {
       cout<<"Base gun\n";
     }   
//3000
     virtual void sun()			//concrete virtual
      {
       cout<<"Base sun\n";
     }   
//_____6000
    virtual void run()=0;		//abstract function
     
};

class Derived : public Base
{
     public:
         int i,j; 
//4000
    void fun()			//redefination (concrete )function
     {
        cout<<"Derived fun\n";
     }    
//5000
     virtual  void gun()			//overriding
     {
        cout<<"Derived gun\n";
     }
//6000
   void run()			//concrete function
     {
        cout<<"Derived run\n";
     }

};
    int main()
{
//  Base bobj;			//Not allowed
   Derived dobj;			//allowed   

    Base *bp = NULL;
    bp = &dobj;			//upcasting

    cout<<sizeof(Base)<<"\n";		//16
    cout<<sizeof(Derived)<<"\n";	//24
   
   bp->fun();			//base fun
   bp->gun();			//Derived gun
   bp->sun();			//base sun	
   bp->run();			//Derived run
  return 0;
}
