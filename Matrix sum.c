#include<stdio.h>
int main()
{
  int i,j,A[2][2]={1,2,3,4},B[2][2]={6,7,4,9};
  int C[2][2];
  printf("A matrix is\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {
 printf("%d ",A[i][j]);

    }
      printf("\n");
  }
  printf("B matrix is\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {
 printf("%d ",B[i][j]);

    }
      printf("\n");
  } printf("C matrix is\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {
 C[i][j]=A[i][j]+B[i][j];

    }
      printf("\n");
  }
   for(i=0;i<2;i++){
    for(j=0;j<2;j++)
    {
 printf("%d ",C[i][j]);

    }
      printf("\n");
  }
  return 0;
   
}