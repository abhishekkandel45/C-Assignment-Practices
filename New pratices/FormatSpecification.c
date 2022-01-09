#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*  Here %d will be replased by the letter crossponding to them,  */
    printf ( "Today I am %d years old and next year I'm going to be %d\n",18,19);


   /*adding .1f indicates how much digit we want to shoe. For eng %.2f means it will  give percise result up to 2 digit from the point
   like 0.45 and so so */
    printf ( "My average grade is : %.1f\n",93.7);

    //Assignment 
        printf("We have %d coins in the bank\n", 100);
        printf("We have %f coins in the bank\n", 125.7);
        printf("Year = %d\n", 2020);
        printf("Your average grade is: %f \n", 95.13);
        printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
        printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
        printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
        printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
        printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
        printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
        //Assignment Result 
    return 0;
}