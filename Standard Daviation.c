/*Find the Standard Daviation from an array*/
#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,dsum=0,i,la[7]={1,2,3,4,5,6,7},da[7],tui;
    float mean,sd;
    for(i=0;i<7;i++)
     {
         sum=sum+la[i];

      }
      mean=sum/7.0;
      for(i=0;i<7;i++)
      {
        tui=mean-la[i];
        da[i]=tui*tui;
        dsum=dsum+da[i];
      }
      sd=sqrt(dsum/7.0);
      printf("Standard Daviation is %f\n",sd);
      return 0;
}