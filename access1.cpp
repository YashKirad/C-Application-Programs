#include<iostream>
using namespace std;

//public private
class Demo
{
   public:
       int i;
            private:
                  int j;
                  protected:
                             int k;
};
  class Hello : public Demo  
{
     public:
           int x;
           private:
                 int y;
                     protected:
                            int z;
};

 int main()
 {
    Demo dobj;
    dobj.i;
    cout<<dobj.i; 
    dobj.j;
    cout<<dobj.j;
    dobj.k;
          cout<<dobj.k;
    Hello hobj;      
      hobj.x;
          cout<<hobj.x;   
   hobj.y;
      cout<<hobj.y;       
 hobj.z;
cout<<hobj.z;
   hobj.i;
        hobl.j;
           hobj.k; 

  return 0; 
}
  