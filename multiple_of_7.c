/*
 Write  a C program, whic will print two digit number whose sum of both digits is multiple of  seven ( Eg. 16, 25, 34)
*/
#include <stdio.h>
int main()
{
    int i, sum, dig; mul;
    for (i = 10; i < 99; i++)
    {
        while (i<=0)
        {
          dig=i%10;
          sum= sum+dig;
          i=i/10;
        }
        mul=sum%7;
        if (mul==0)
        {
          printf ("%d",sum);
        }
        
    }
    return 0;
}