#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,s,A;
   a=5;
   b=9;
   c=8;
   s=(a+b+c)/2;
   A=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area is=%f",A);
   return 0;
}
