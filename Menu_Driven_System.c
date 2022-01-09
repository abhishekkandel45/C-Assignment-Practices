/*
Lab Experiment-6: Write a menu-driven program using Switch case to calculate the following:

i.   Area of circle
ii.  Area of square
iii. Area of sphere   
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int option;
	float cir, sqr, spr, pi=3.14,rc,len,rs;
	Input:
	printf	 ("To find the area of Circle, Press 1 \n");
	printf ("To find the area of square, Press 2 \n");
	printf ("To find the area of sphere, Press 3\n");
	printf ("Press 0 to terminate the program\n");
	printf ("Enter Your choice (0/1/2/3)");
	scanf ("%d",&option);
	switch (option)
	{
		case 0:
			exit (0);
			
		case 1:	
			printf ("Enter the radius of Circle:  ");	
			scanf ("%f",&rc);
			cir= pi*rc*rc;
			printf ("The Area of the circle is %.2f",cir);
			break;
		case 2:	
			printf ("Enter the length of Square:  ");	
			scanf ("%f",&len);
			sqr= (len*len);
			printf ("The Area of the square is %.2f",sqr);
			break;
		case 3:	
			printf ("Enter the radius of Sphere:  ");	
			scanf ("%f",&rs);
			spr= 4*pi*rs*rs;;
			printf ("The Area of the sphere is %.2f",spr);
			break;	
		default :
			printf ("Invalid Input\n");		
			goto Input;
	}
	
	return 0;
}