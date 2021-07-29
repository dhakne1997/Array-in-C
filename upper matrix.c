
//Write a program in C to print or display upper triangular matrix.


#include<stdio.h>
   int main()
    {
     int m[10][10],i,j,r,c;
     
     printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &r, &c); 
     
  printf("Enter a matrix of size :-\n");
  for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      scanf("%d",&m[i][j]);
    }
    printf("Upper triangular matrix is as follows:-\n");
    for(i=0;i<3;i++)
         {
    for(j=0;j<3;j++)
            if(i<=j)
        printf("%3d",m[i][j]);
     else
        printf("  0");
              printf("\n");
      }
     }