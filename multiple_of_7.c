#include <stdio.h>
void main()
{
    int i, sum, mul,temp,dig;
    for	(i=10;i<=70,i++)
    {
        temp= i
            while (temp==0)
            {
              dig= temp%10;
              sum= sum+temp;
              temp=temp/10;
            }
        if (sum%7==0)
        {
            printf ("%d",i);
        }      
    }
}