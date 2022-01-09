#include <Stdio.h>
#include <conio.h>
int main()
{
	int num,temp, dig, sum=0,rev=0;
	printf ("Please Enter the Number:  ");
	scanf ("%d", &num);
	temp=num;
	while (num>0)
	{
		dig=num%10;
		rev= rev*10+dig;
		sum=sum+dig;
		num=num/10;
	}
	{
		if (rev==temp)
		printf ("%d is a palindrome number  \n",temp);
		else
		printf ("%d is not a palindrome number \n",temp);
	}
	printf ("%d is reverse of %d \n",rev,temp);
	printf ("%d is the sum of all the digit of %d", sum, temp);
	return 0;
}