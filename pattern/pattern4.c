#include<stdio.h>
int main()
{
    int i,j,k;
    /*
    1
    2 3
    4 5 6
    7 8 910
   1112131415

    int no=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2d ", no);
            no ++;
        }
        printf("\n");
    }*/
    /*
    *****
    *   *
    *   *
    *   *
    *   *
    *****
    */

    for(i=1;i<=5;i++)
    {
        {
            for(j=1;j<=5;j++)
            if( i==1 || i==5)
            {
                printf("*");
            }
            else if (j==1 || j==5)
            {
                printf("*");
            }
            else
            printf(" ");
            printf("\n");
        }
    }
    return 0;
}