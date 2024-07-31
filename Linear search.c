#include<stdio.h>
int main()
{
    int data[7]={30,40.100,50,60,70,34};
    int found=-1,i,searchnumber=34;
    for(i=0;i<7;i++)
    {
        if(data[i]==searchnumber)
        {
           found=i;
           break;
        }
    }
        if(found==-1)
        {
            printf("Not found");
        }
        else
        {
            printf(" found");
        }

 return 0;   
}