#include<stdio.h>
int main()
{
    int i,j,k;
    int space=4;
    int s=0;
    /*
        1
       12
      123
     1234
    12345

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        space--;
        for(j=1;j<=i;j++)
        printf("%d", j);
        printf("\n");
    }*/
    /*
     1 
    1 2 
   1 2 3 
  1 2 3 4 
 1 2 3 4 5 
    
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        space--;
        for(j=1;j<=i;j++)
        printf("%d ", j);
        printf("\n");
    }*/

    /*
    12345
     1234
      123
       12
        1

    for(i=5;i>=1;i--)
    {
        for(k=0;k<s;k++)
        printf(" ");
        s++;
        for(j=1;j<=i;j++)
        printf("%d", j);
        printf("\n");
    }*/
    /*
    1 2 3 4 5 
     1 2 3 4 
      1 2 3 
       1 2
        1
    
    for(i=5;i>=1;i--)
    {
        for(k=0;k<s;k++)
        {
            printf(" ");
        }
        s++;
        for(j=1;j<=i;j++)
        printf("%d ", j);
        printf("\n");
    }*/
    /*
       1 
      1 2 
     1 2 3 
    1 2 3 4 
   1 2 3 4 5 
    1 2 3 4 
     1 2 3 
      1 2 
       1
       
    
    for(i=1;i<5;i++)         //for column
    { 
        //for the space
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        space--;
        for(j=1;j<=i;j++)    //for row
        printf("%d ", j);
        printf("\n");
        
    }
    for(i=5;i>=1;i--)
    {
        for(k=0;k<s;k++)
        {
            printf(" ");
        }
        s++;
        for(j=1;j<=i;j++)
        printf("%d ", j);
        printf("\n");
        
    }*/

    /*
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
  * * * * 
   * * *
    * *
     *   
    */
    for(i=1;i<5;i++)
    {
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        space --;
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    for(i=5;i>=1;i--)
    {
        for(k=0;k<s;k++)
        {
            printf(" ");
        }
        s++;
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    return 0;
}