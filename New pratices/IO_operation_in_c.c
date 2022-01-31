//Program for storing no’s from 1 to 10 and print the same
//Write a Program to perform the I/O operation.
#include<stdio.h>
int main( ){
   FILE *fp;
   int i;
   fp = fopen ("num.txt", "w");
   for (i =1; i<= 10; i++){
      putw (i, fp);
   }
   fclose (fp);
   fp =fopen ("num.txt", "r");
   printf ("file content is\n");
   for (i =1; i<= 10; i++){
      i= getw(fp);
      printf ("%d",i);
   }
   fclose (fp);
   return 0;
}