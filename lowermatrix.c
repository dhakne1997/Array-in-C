
//Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>
   int main()
    {
     int m[3][3],i,j,r,c;
     
     printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &r, &c); 
     
     
     
     
  printf("Enter a matrix of size :-\n");
  for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
      scanf("%d",&m[i][j]);
    }
    printf("Lower triangular matrix is as follows:-\n");
    for(i=0;i<3;i++)
         {
    for(j=0;j<3;j++)
            if(i>=j)
        printf("%d",m[i][j]);
     else
        printf("  0");
              printf("\n");
      }
     }