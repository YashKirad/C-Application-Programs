#include<iostream>
using namespace std;
  int main()
{
    enum Marvellous_Batch{PPA=0,LB=1,AWD=2,Python=3,};
    const int Fees{15000,16000,17000,18000};  
    const float Duration{4.5,3.5,3.5,4.0};

   int choice=0;

   cout<<"Select the batch you want to apply :\n";
   cout<<"0: PPA\n";
   cout<<"1: LB\n";
   cout<<"2: AWD\n";
   cout<<"3: Python\n";

  cin>>choice;

  switch(choice)
   {
     case PPA :
     cout<<"Thankyou for choosing Pre-placement Activity Batch :\n";
     cout<<"Fees for the Batch are :"<<Fees[PPA]<<"\n";
     cout<<"Duration in months for batch is :"<<Duration[PPA]<<"\n";
     break;

    case LB :
    cout<<"Thankyou for choosing Logic Building Batch :\n";
    cout<<"Fees for the Batch are :"<<Fees[LB]<<"\n";
    cout<<"Duration in months for batch is :"<<Duration[LB]<<"\n";
    break;

   case AWD :
   cout<<"Thankyou for choosing Angular Web Development Batch :\n";
   cout<<"Fees for the Batch are :"<<Fees[AWD]<<"\n";
   cout<<"Duration in months for the batch is :"<<Duration[AWD]<<"\n";
   break;
   }
    return 0;
}







