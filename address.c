#include<stdio.h>
#include<stdlib.h>

//extern
  int arr[4] = {10,20,30,40};
  
//extern
  int no;
 
 int main()
{
   //auto
    int brr[3] = {11,21,51};
    
  //register 
  register int x=15;

   int *p = NULL;

  //static
    static int value = 11;

  //dynamic memory allocation
    p = (int*)malloc(sizeof(int)*3);

    printf("Jay Ganesh...\n");

  return 0;
}

