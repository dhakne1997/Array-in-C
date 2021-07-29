
//Write a program in C for subtraction of two Matrices

#include <stdio.h>
 
int main()
{
   int r, c, i, j, A[10][10], B[10][10], sub[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &r, &c);
   printf("Enter the elements of first :A matrix\n");
 
   for (i = 0; i < r; i++)
      for (j = 0; j<c;j++)
         scanf("%d", &A[i][j]);
 
   printf("Enter the elements of second :B matrix\n");
 
    for (i = 0; i < r; i++)
      for (j = 0; j < c;j++)
         scanf("%d", &B[i][j]);
   
   printf("\n Sub of entered matrices:\n");
   
    for (i = 0; i<r; i++)
    {
	
      for (j = 0;j<c;j++){
      	
         sub[i][j] = A[i][j]- B[i][j];
         printf("%d\t",sub[i][j]);
      }
      printf("\n");
   
}

return 0;
}
