#include<stdio.h>
int main()
{
    int i,j,k;
    /*
    1        1
    12      21
    123    321
    1234  4321
    1234554321
    
    int space=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        space =space-2;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*
    1       1
    12     21
    123   321
    1234 4321
    123454321
    
    int space=7;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j!=5)
            printf("%d", j);
        }
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        space=space-2;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*
    1234554321
    1234  4321
    123    321
    12      21
    1        1
    
    int space=1;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=1;k<space;k++)
        printf(" ");
        space = space + 2;
        for(j=i;j>=1;j--)
        printf("%d", j);
        printf("\n");
    }*/

    /*
    123454321
    1234 4321
    123   321
    12     21
    1       1
    
    int space = 1;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j!=5)
            printf("%d", j);
        }
        for(k=1;k<space;k++)
        {
            printf(" ");
        }
        if(i==5)
        space ++;           // IMPORTANT LINE IN THIS PROBLEM
        else
        space = space + 2;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }*/

    /*
1        1
12      21
123    321
1234  4321
1234554321
1234554321
1234  4321
123    321
12      21
1        1

    int space3=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=1;k<=space3;k++)
        {
            printf(" ");
        }
        space3 =space3-2;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    int space4=1;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=1;k<space4;k++)
        printf(" ");
        space4 = space4 + 2;
        for(j=i;j>=1;j--)
        printf("%d", j);
        printf("\n");
    }*/
 /*
1        1
12      21
123    321
1234  4321
1234554321
1234  4321
123    321
12      21
1        1

    int space=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        space =space-2;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    int space2=2;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=0;k<space2;k++)
        printf(" ");
        space2 = space2 + 2;
        for(j=i;j>=1;j--)
        printf("%d", j);
        printf("\n");
    }*/

    /*
    1234554321
    1234  4321
    123    321
    12      21
    1        1
    1        1
    12      21
    123    321
    1234  4321
    1234554321
    */
    int space = 1;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=1;k<space;k++)
        {
            printf(" ");
        }
        space = space + 2;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    int space2=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(k=1;k<=space2;k++)
        {
            printf(" ");
        }
        space2 = space2 - 2;
        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}