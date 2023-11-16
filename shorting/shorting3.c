//shorting of 2d array
//row wise 

#include<stdio.h>
int main()
{
    int i,j,k,a[3][3],swap;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the Value :");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nBefore Shortiing : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // Shorting process
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(a[i][j] > a[i][k])
                {
                    swap = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = swap;
                }
            }
        }
    }
    printf("\nAfter Shorting :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}