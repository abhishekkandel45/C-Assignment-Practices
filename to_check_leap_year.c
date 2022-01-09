#include <stdio.h>
#include <math.h>
int main()
{
    int y;
    printf("Enter the year\n");
    scanf ("%d",&y);
    if (y%4==0)
    {
        printf ("Leap Year\n");
    }
    else
    {
        printf ("Not leap Year");
    }    
    return 0;
}
