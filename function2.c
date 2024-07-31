#include<stdio.h>
int prn_msg()
{
  printf("Sum of all numbers 1 to your given numbers\n");
}
int add_all(int val)
{   
   
    int i;
    int sum=0;
    for(i=0;i<=val;i++)
    {
        sum+=i;
    }
    
    printf("summation of all numbers from 1 to %d is %d",val,sum);
}
    
int main()
{     
     prn_msg();
    add_all(3);
}


