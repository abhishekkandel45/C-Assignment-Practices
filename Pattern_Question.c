/* 
Write a C Program to print 
1
2   2
3   3   3
*/

#include <stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <=3; i++)
    {
        for ( j = 1;j<=i; j++)
        {
            printf ("%d  ",i);
        }
        printf ("\n");
    }
    return 0;
}