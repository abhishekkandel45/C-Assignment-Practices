/*
 Write a program to multiply two matrices. 
*/

#include<stdio.h>
#include<string.h>
 int  main()
{
   int ar1[3][3],ar2[3][3],ar3[3][3],i,j,k;
   printf("Enter elements of first array :");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     scanf("%d",&ar1[i][j]);

   printf("enter elements of second array :");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     scanf("%d",&ar2[i][j]);
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     ar3[i][j]=0;


   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
     for(k=0;k<3;k++)
     {
      ar3[i][j]=ar3[i][j]+(ar1[i][k]*ar2[k][j]);
     }
    }
   }

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
     printf("%d ",ar3[i][j]);
    printf("\n");
   }
   return 0;
  }