/*
Write a program to check whether the given number is Armstrong or not
*/

#include <stdio.h>
int main()
{
	int n,temp,sum=0,r;
	printf ("Enter the number to check armstrong:  ");
	scanf ("%d",&n);
	temp=n;
	while (n>0)
	{
		r=n%10;
		sum= sum+(r*r*r);
		n=n/10;
	}
	if (sum==temp)
	{
	
	printf ("%d is an Armstrong number",temp);
	}
	else
	{
	printf("%d is not an armstrong number",temp);
	}
	return 0;
}