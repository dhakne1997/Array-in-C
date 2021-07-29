
//Write a program in C to find transpose of a given matrix.



#include<stdio.h>

int  main()
{
    int A[12][12],B[12][12];
    int i,j,row,col;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    printf("The original  matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    
    
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            B[j][i]=A[i][j];
        }
    }

    printf("The transpose of the matrix is\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
}