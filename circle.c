#include<stdio.h>
int main()
{
   int x,y,eq;
   printf("Input X=\n");
   scanf("%d",&x);
   printf("Input Y=\n");
   scanf("%d",&y);

   eq=((x*x)+(y*y)-(10*x)-(14*y)+74);
   if(eq>0)
   {
   printf("Outside\n");
   }
  else if(eq==0)
   {
   printf("on the circle\n");
   }
else if(eq<0)
{
printf("Inside\n");
}
 return 0;

}
