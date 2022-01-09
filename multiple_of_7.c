/*
 Write  a C program, whic will print two digit number whose sum of both digits is multiple of  seven ( Eg. 16, 25, 34)
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, sum, first_num, second_number;
    for (i = 10; i < 99; i++)
    {
      first_num = i/10;
      second_number = i%10;       
      sum = first_num + second_number;
      if(sum%7==0)
      {
        printf("Num: %d \n", i);
      }
    }
    return 0;
}