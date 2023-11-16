#include<stdio.h>
#include<string.h>
int main()
{
    /*char s[100];
    printf("Enter enter the string :");
    //scanf("%s", s);
    //fgets(s, sizeof(s), stdin);          //Using fgets
    scanf("%[^\n]", s);                    //Using %[^\n]
    printf("string = %s\n", s);*/

    // String function
    //strlen()
    /*char st[100];
    int l;
    printf("Enter the String :");
    //scanf("%s", st);                      // string for only one word
    fgets(st, sizeof(st), stdin);*/         // string with space


    //printf("\n string :%s", st);

    //strlen()
    /*l = strlen(st);                    //###
    printf("\nstring length = %d", l);
    
    // strcpy()
    char cpy[100];
    strcpy(cpy,st);                    //###
    printf("\nAfter copy :%s", cpy);*/

    //revers strrev()
    /*strrev(a);                     // not working
    printf("After revers :%s", a);*/

    //concat of two string strcon()
    /*char b[100],c[100];
    printf("\nEnter the 2nd string :");
    fgets(b , sizeof(b), stdin);

    strcat(b,st);
    printf("\nAfter combing :%s", b);*/

    //concat 2 string into 3rd
    /*char a[100],b[100],c[100];
    printf("\nEnter the 1nd string :");
    fgets(a, sizeof(a), stdin);
    printf("\nEnter the 2nd string :");
    fgets(b, sizeof(b), stdin);
    strcpy(c,a);
    strcat(c,b);
    printf("After concat :%s", c);*/

    //coparing of 2 string by ASCII Value
    //strcmp()
    
    /*char a[100],b[100];
    printf("Enter the 1nd string :");
    fgets(a, sizeof(a), stdin);

    printf("\nEnter the 2nd string :");
    fgets(b, sizeof(b), stdin);
    int ans;
    ans = strcmp(a,b);
    if(ans > 0)
    {
        printf("1st string is grater");
    }
    else if(ans < 0)
    {
        printf("2nd string is grater");
    }
    else
    printf("Both are same");*/
    return 0;
}