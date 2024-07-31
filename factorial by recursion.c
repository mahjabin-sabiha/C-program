#include<stdio.h>
int find_factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
  else
  {
    return (n*find_factorial(n-1));
  }
  

}
int main()
{
    int x;
    x=find_factorial(5);
printf("Factorial of 5 is %d\n",x);
return 0;
}