#include <stdio.h>
#include <conio.h>
void main()
{
    int year;
    printf("Enter the year?\n");
    scanf("%d",&year);
    if (year%4==0 || year%100==0 || year%400==0)
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not leap year",year);
    }
    getch();
    return 0;
}
