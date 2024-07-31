#include<stdio.h>
int main()
{
    int data[7]={30,40.100,50,60,70,34};
    int found=-1;
    int i,searchnumber=100;
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
            printf("%d is not found in array",searchnumber);
        }
        else
        {
            printf(" %d is found in array position %d",searchnumber,found);
        }

 return 0;   
}