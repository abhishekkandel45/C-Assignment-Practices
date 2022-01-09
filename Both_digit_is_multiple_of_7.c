/*
 Write  a C program, whic will print two digit number whose sum of both digits is multiple of  seven ( Eg. 16, 25, 34)
*/
#include <stdio.h>
int main()
{
    int i;
    for ( i = 10; i < 99; i++)
    {
        if (((i/10)+(i%10))%7==0)
        {
            printf("\n num : %d",i);
        }   
    }
   return 0; 
}