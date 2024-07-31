#include<stdio.h>
int main()
{
    int la[5]={1,2,3,4,5},da[5],temp;
    float mean,variance;
    int i,sum=0,dsum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+la[i];
    }
    mean=sum/5.0;
    for(i=0;i<5;i++)
    {
        temp=mean-la[i];
        da[i]=temp*temp;
        dsum=dsum+da[i];

    }
    variance=dsum/5.0;
    printf("Variance is %.f\n",variance);
    return 0;

}