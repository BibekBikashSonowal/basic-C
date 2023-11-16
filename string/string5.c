#include<stdio.h>
int main()
{
    char str[10]={'S','O','N','O','W','A','L'};
    /*printf("%s", str);*/
    
    /*for(int i=0; i<str[i]; i++)
    {
        printf("%c", str[i]);
    }*/
    for(int i=0; str[i]!='\0';i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}
/*{
    char str[10]="SONOWAL";
    int i;
    for(i=0;str[i];i++);// length of the string
    printf("%d", i);
    return 0;
}*/