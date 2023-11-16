//Structure Concept - Scan structure member and display

#include<stdio.h>
struct circle
{
    int radius,area;
};

int main()
{
    struct circle c1;
    printf("Enter the radius:");
    scanf("%d", &c1.radius);
    c1.area = 3.14*c1.radius*c1.radius;
    printf("%d\n%d", c1.radius,c1.area);
    return 0;
}