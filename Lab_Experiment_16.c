// Write a program to use macros    

#include <stdio.h>
#define pi 3.14
int main()
{
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Notice, the use of PI
    area = pi*radius*radius;

    printf("Area=%.2f",area);
    return 0;
}