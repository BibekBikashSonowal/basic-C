#include<stdio.h>
#include<string.h>
int main()
{
    /*char s[100];
    printf("Enter string : ");
    fgets(s, 100, stdin);
 
    
    int i = 0;
    while(s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }*/
    /*for(int i=0; i<s[i]; i++)
    {
        printf("%c", s[i]);
    }*/

    //Display string char by char with its ASCII value
    /*char s[100];
    printf("Enter string : ");
    fgets(s, 100, stdin);

    int i = 0;
    while(s[i] != '\0')
    {
        printf("%c -> %d\n", s[i],s[i]);
        i++;
    }*/
    //Find length of string without using strlen
    /*
    char s[100];
    printf("Enter string : ");
    fgets(s, 100, stdin);
    int i=0,length = 0;
    while(s[i] != '\0')
    {
        length++;
        i++;
    }
    printf("Length = %d\n", length);*/

    //Replace Character in string
    
    /*char s[100],ch1,ch2;
    printf("Enter the string :");
    fgets(s, 100, stdin);
    printf("Enter charater which one change :");
    scanf("%c%c", &ch1,&ch2);
    printf("Enter charater which to change :");
    scanf("%c", &ch2);

    int i=0;
    while(s[i] != '\0')
    {
        if(s[i] == ch1)
        {
            s[i] = ch2;
        }
        i++;
    }
    printf("%c to %c\n", ch1,ch2);
    printf("%s", s);
    */

    //count Specific Character
    
    /*char s[100],ch;
    printf("Enter the string :");
    fgets(s, 100, stdin);
    printf("Enter the specific character :");
    scanf("%c", &ch);
    int i=0, count = 0;
    while(s[i] != '\0')
    {
        if(s[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("number of %c is equal to %d", ch,count);
    */
    
    //count word
    /*char s[100];
    printf("Enter the string :");
    fgets(s, 100, stdin);

    int i=0,count=0;
    while(s[i] != '\0')
    {
        if(s[i] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("Number of word = %d", count+1);
    */

    //Convert string into Lowercase, Uppercase and Toggle case
    /*
    char s[100];
    printf("Enter the string :");
    fgets(s, 100, stdin);
    int i=0;*/

    //uperr to lower
    /*while(s[i] != '\0')
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        i++;
    }
    printf("After\n%s", s);*/

    //Lower to Upper
    /*while (s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        i++;
    }
    printf("After\n%s", s);
    */

    //Toggle case

    /*while(s[i] != '\0')
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        else if(s[i] >= 'a' &&  s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        i++;
    }
    printf("After\n%s", s);*/
    
    //Copy one string without using strcpy()

    /*char s1[100],s2[100];
    printf("Enter the String :");
    fgets(s1, 100, stdin);
    int i=0;
    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("original : %s\ncoppied : %s\n", s1,s2);*/
    
    //Encode String

    /*char s1[100],s2[100];
    printf("Enter the string : ");
    fgets(s1, 100, stdin);
    int i=0;
    while(s1[i] != '\0')
    {
        s2[i] = s1[i] + 7;
        i++;                     //suppose it finish 10
    }
    s2[i] = '\0';                //'\0' location will be 11
    printf("original string %s\nEncode string %s\n", s1,s2);*/

    //Reverse String without using strrev()
    
    /*char s[100],r[100];
    printf("Enter the string :");
    fgets(s, 100, stdin);
    int i,j,l;
    l = strlen(s);
    for(i=l-1,j=0;i>=0;i--,j++)    //i=l-1 becouse length of string alway contain exatra NULL char '\0'
    {
        r[j]=s[i];
        //printf("%c", r[j]);      //This one also use for print the string
    }
    r[i]='\0';
    printf("Reverse string : %s", r);*/


    //Concat without using strcat()
    
    /*char s1[100],s2[100],com[100];
    printf("Enter the 1st string :");
    fgets(s1, 100, stdin);
    printf("Enter the 2nd string :");
    fgets(s2, 100, stdin);
    int i=0,j=0;
    while(s1[i] != '\0')
    {
        com[j] = s1[i];
        j++;
        i++;
    }
    i=0;
    while(s2[i] != '\0')
    {
        com[j] = s2[i];
        j++;
        i++;
    }
    com[j]='\0';
    printf("After combination :%s", com);
    */

    //Find Position of Secific Charater
    char s[100],ch;
    printf("Enter the string :");
    fgets(s, 100, stdin);
    printf("Enter the spacific character :");
    scanf("%c", &ch);
    int i=0,found = 0;
    while(s[i] != '\0')
    {
        if(s[i] == ch )
        {
            found = 1;
            printf("Position : %d\n", i+1);       //i+1 becouse zero indexing
        }
        i++;
    }
    if(found == 0)
    printf("%c is not present in the string", ch);
    return 0;
}