#include<stdio.h>
int main()
{
    int right,left;
    int a[]={1,2,3,5,67,89,90},item=67;
    
    left=0;
    right=6;
    while(left<=right)
    {
        middle=right+left/2.0;
        if(a[middle]==item)
        {
            printf("Item is found at index %d",middle);
        }
        else if(a[middle]<item)
        {
            left=middle+1;
        }
        else
        {
            right=middle-1;
        }
        printf("Item is not found\n");
    }
    return 0;

    }
