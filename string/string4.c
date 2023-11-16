//Multidemtional string

//2D string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100][100];
    int i=0;
    for(i=0;i<=5;i++)
    {
        printf("Enter the string :");
        fgets(s[i], sizeof(s), stdin);
    }
    printf("Output\n :");
    for(i=0;i<=5;i++)
    {
        printf("%s", s[i]);
    }
    return 0;
}