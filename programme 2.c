#include<stdio.h>
#include<math.h>
int main()
{
    int x=5,y=7;
    char dq;
    dq=((x*x)-(10*x)+(y*y)+25-(14*y));
    if(dq<0)
    {
        printf("%d and %d in inside",x,y);
    }

else if(dq>0)
    {
        printf("%d and %d in outside",x,y);
    }
    return 0;
}
