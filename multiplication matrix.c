

//Write a program in C for multiplication of two square Matrices


#include <stdio.h>

 
int main()
{
   int r, c, i, k,j, A[10][10], B[10][10], mul[10][10];
 
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
   
   
  
   printf("\n mul of entered matrices:\n");
   
    for (i = 0; i<r; i++)
    {
	
      for (j = 0;j<c;j++){
      	
         mul[i][j] = A[i][j]* B[i][j];
         
         
    mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=A[i][k]*B[k][j];    
   


}    
}    
}    




  
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    

    
         
         
         printf("%d\t",mul[i][j]);
      }
      printf("\n");
   
}

return 0;
}
