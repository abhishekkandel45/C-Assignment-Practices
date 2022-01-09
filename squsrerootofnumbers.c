#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a,b,c,d,r1,r2,rp,ip;
    printf ("Enter the value of a: ");
    scanf ("%f",&a);
    printf ("Enter the value of b: ");
    scanf ("%f",&b);
    printf ("Enter the value of c: ");
    scanf ("%f",&c);
    d= (b*b)-(4*a*c);
    if (d>0)
    {
        r1= ((-b)-sqrt(d)/(2*a));
        r2= ((-b)+sqrt(d)/(2*a));
        printf ("The square roots of the quardic Equation are Different:");
        printf( "The Square root of quardic Equaction Are: %.2f and %.2f",r1,r2);
    }
    else if (d==0)
    {
        r1=r2=(-(b)/(2*a));
        printf (" The Square roots of the given quadic Equation is Same");
        printf ("The Square root of Quardic Equation are: %.2f and %.2f", r1,r2);
    }
    else 
    {
        rp= (-(b)/(2*a));
        ip= (sqrt(-d)/(2*a));
        printf( "The Square Roots are Imaginary\n");
        printf ("The First Imaginary root is %.2f +  %.2f i \n",rp,ip);
        printf ("The Second Imaginary root is %.2f -  %.2f i \n",rp,ip);
    }
    getch();  
}