#include <stdio.h>
int main()
{
	int a,b;
	printf ("Enter the first number: ");
	scanf("%d",&a);
	printf ("Enter the Second Number: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greatest",a);
    }
	else if(b>a)
	{
		printf("%d is greatest",b);
    }
	else
    {
		printf("%d and %d are equal",a,b);
	}
	getch();
	return 0;
	
}
