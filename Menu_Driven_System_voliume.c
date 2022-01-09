/*
Write a C program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder
and Cone. Ask the user which one s/he wants to calculate, and take the appropriate required inputs.
Then print the result.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
 int option;
 float cube,cuboid,sphere,cylinder,cone, pi=3.141, len, width, height, rad;
 Input:
 printf ("To calculate volume of Cube, Press 1\n");
 printf ("To calculate volume of Cuboid, Press 2\n");
 printf ("To calculate volume of Sphere, Press 3\n");
 printf ("To calculate volume of Cylinder, Press 4\n");
 printf ("To calculate volume of Cone, Press 5\n");
 printf ("Press 0 to Terminate the Program \n");
 printf ("Please Enter your Choice (0/1/2/3/4/5:"  );
 scanf ("%d", &option);
 switch (option)
 {
 case 0:
 exit (0); 

 case 1:
    printf ("Enter the length of cube:   ");
    scanf ("%f", &len);
    cube=len*len*len;
    printf ("\nThe volume of Cube having Lenght %.2f is %.2f",len,cube);
     break;

 case 2:  
    printf("\nEnter the Lenght of the Cuboid:  ");
    scanf  ("%f",&len);
    printf ("\n Ente the width of of the Cuboid:  ");
    scanf  ("%f", &width);
    printf ("\nEnter the height of the coboid:  ");
    scanf ("%f",&height);
    cuboid=len*width*height;
    printf ("\nThe Volume of cube havig lenght %.2f width %.2f and height %f is %.2f",len,width,height,cuboid);
    break;

case 3:
   printf ("\n Enter the radius of Sphere:   ");
   scanf ("%f", &rad);
   sphere= (4/3)*pi*rad*rad*rad;
   printf ("\nThe Volume of Spherer having the radiud %.2f is %.2f", rad, sphere);
   break;

case 4:
    printf ("\nEnter the radius of the cylinder: ");
    scanf ("%f", &rad);
    printf ("\nEnter the height of the cylinder: ");
    scanf ("%f", &height);
    cylinder= (pi*rad*rad*height);
    printf("\nThe Volume of the Cylinder having radius %.2f and height %.2f is %.2f",rad, height,cylinder);
    break;

case 5:
    printf ("\nEnter the radius of the Cone:  ");
    scanf ("%f", &rad);
    printf ("\nEnter the height of the cone:  ");
    scanf ("%f",&height);
    cone= (pi*rad*rad*height)/3;
    printf("\nThe Volume of the Cone having the Radius %.2f and Height %.2f is %.2f", rad,height,cone);
    break;

default :
    printf ("Invalid Input\n");		
    goto Input;
}
	return 0;
}
