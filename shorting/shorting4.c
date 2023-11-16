// shorting of 2d array
// shorting column wise


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
    printf("Before shorting :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // shorting
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=i+1;k<3;k++)
            {
                if(a[i][j] > a[k][j])
                {
                    swap = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = swap;
                }
            }
        }
    }
    printf("\nAfter shorting :\n");
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