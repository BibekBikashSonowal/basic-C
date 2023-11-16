// discending order

#include<stdio.h>
int main()
{
    int i,j,a[10],temp;
    for(i=0;i<=9;i++)
    {
        printf("Enter the value :");
        scanf("%d",&a[i]);
    }
    printf("Before shorting :\n");
    for(i=0;i<=9;i++)
    printf("%d ", a[i]);

    //SHORTING PROCESS
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter shorting :\n");
    for(i=0;i<=9;i++)
    printf("%d ", a[i]);
    return 0;
}