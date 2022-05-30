#include<iostream>
using namespace std;

int main()
{
  //                       0	1       2	3        4       5      6	
    enum Days {Sun,Mon,Tues,Wed,Thrus,Fri,Sat};

   enum Days obj;

   obj = Tues;

   cout<<obj<<"\n";

    return 0;
}