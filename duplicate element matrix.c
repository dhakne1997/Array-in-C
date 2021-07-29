//Write a program in C to count a total number of duplicate elements in an array.

#include <stdio.h>

int main()
{
    int a[100],i,j, n, count = 0;

    
    
    
    printf("Enter size of the array : ");
    scanf("%d", &n);

      printf("\nEnter  element in array : ",i);
          for(i=0; i<n; i++)
        {
	
        scanf("%d", &a[i]);
    }

    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           
           
           
           
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}


