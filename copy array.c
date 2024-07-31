#include<stdio.h>
int main()
{
    int a1[30],a2[30];
    int i,n;
    printf("Enter the value n:");
    scanf("%d",&n);
    printf("Array 1 is:");
    for(i=0;i<n;i++)
{
    scanf("%d",&a1[i]);
}
for(i=0;i<n;i++)
{
    printf("%d\n",a1[i]);
}

     for(i=0;i<n;i++)
{
    a2[i]=a1[i];

}
printf("Array 2 is:");
for(i=0;i<n;i++)
{
    printf("%d\n",a2[i]);
}
  return 0;


}