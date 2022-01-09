/*
To evaluate area of Triangle (sqrt(s(s-a)(s-b)(s-c)
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

void main(){
    float a, b, c, s, area;
    printf("Enter the length of three sides of triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    /* using the formula
    s=(a+b+c)/2
    (sqrt(s(s-a)(s-b)(s-c)  */
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle : %0.4f\n", area);
    return 0;
    getch();
}
