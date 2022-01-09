#include <stdio.h>
int fact(int);
int main()
{
int num, factorial;
	printf ("Enter the number to calculate its Factorial:  ");
	scanf ("%d",&num);
	factorial= fact(num);
	printf ("Factorial of the number (%d) is  %d \n",num,factorial);
	return 0;
}
int fact (int n)
{
	int i,f=1;
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}