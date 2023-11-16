#include<stdio.h>
//INPUT BY USER WITHOUT SPACE...
/*int main(){
    char str[10];

    scanf("%s", str);

    printf("%s", str);
    printf("\n");
    return 0;
}*/
// INPUT BY USER WITH SPACEw
int main(){
    char str[100];

    fgets(str,100,stdin);//stdin standard input baffer

    printf("%s", str);
    printf("\n");
    return 0;
}