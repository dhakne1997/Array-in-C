//Write a program in C to find The Sum of Opposite Diagonal Elements of a Matrix



#include<stdio.h>
 
int main()
{
 	int i, j, r, c, a[10][10], Sum = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &r, &c);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(i = 0; i < r; i++)
  	{
  		
  		
  		
   		for(j = 0;j<c;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
   	  
   	  
   	  
   	  
 		for(i = 0; i < r; i++)
  	{
   		Sum = Sum + a[i][r - i  - 1];
  	}
 
 	printf("\n The Sum of Opposite Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}