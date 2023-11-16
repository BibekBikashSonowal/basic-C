//sorting string 

#include<stdio.h>
#include<string.h>

int main()
{
    //acending order

    /*char s[100],temp;
    printf("Enter the string :");
    fgets(s, 100, stdin);
    int i,j,l;
    l = strlen(s);
    printf("Before shorting\n%s", s);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("After shorting\n%s", s);*/

    //desending order
    /*char str[100],temp;
    int i,j,l;
    printf("Enter the string :");
    fgets(str, 100, stdin);
    l = strlen(str);
    printf("Before shorting:%s", str);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("After shorting :%s", str);*/
    /*
    if input "bibek"
    output will be "kiebb"
    */
  
    // Sorting multi dimensional string
    
    char s[5][100],temp[1000];
    int i,j,ans;
    for(i=0;i<=4;i++)
    {
        printf("Enter the string :");
        fgets(s[i], sizeof(s), stdin);
    }
    // Shorting
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            ans = strcmp(s[i], s[j]);
            if(ans>0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }   
        }
    }
    printf("\n\nAfter Sorting :\n\n");
    for(i=0;i<=4;i++)
    {
        printf("%s", s[i]);
    }
    return 0;
}