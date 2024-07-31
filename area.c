#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,area,s;
   printf("Enter the value of a,b,c =");
   scanf("%f %f %f",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("%.2f\n",area);
   return 0;


}
