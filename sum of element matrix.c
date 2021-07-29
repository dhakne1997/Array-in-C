
//Write a program in C to find the sum of all elements of the array.


#include <stdio.h>

int main()
{
    int r,c,i,j,sum,a[3][3];       
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&r,&c);    
     a[r][c];   
    printf("Enter the elements of the matrix\n");
    for( i=0;i<r;i++)     
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n Row Sum....\n");
    for(i=0;i<r;i++)   
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,sum);
    }
    
    
    printf("\n Column Sum....\n");
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,sum);
    }
    return 0;
}