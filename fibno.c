#include <stdio.h>
int main()
{
	int i, n,a=0, b=1, sum=0;
	printf ("Please Enter number of terms you want to print:  ");
	scanf ("%d",&n);
	printf ("\n %d %d ", a,b);
	for (i=2;i<n;i++)
	{
		sum=a+b;
		printf ("%d ",sum);
		a=b;
		b=sum;
	}
	return 0;
}