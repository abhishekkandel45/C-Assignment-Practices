/*
Q9. Write a C program that take 2 integer sets A[] and b[] as input and 
prints results of following set operations: 
i. A union B (Write function set_union()) 
ii. A intersection B (Write function set_intersection())
iii. A-B and B-A (Write function set_difference()) [1]
*/

#include <stdio.h>
void set_union(int a[],int b[], int n1, int n2){
	int max;
  	max = n1>n2 ? n1 : n2;
  	int i,j,l,k=0, c[max];
    for(i=0;i<n1;i++){
      	for(j=0;j<k;j++){
         	if(c[j]==a[i]) 
            break;
       	}
       	if(j==k){
          c[k]=a[i];
          k++;
       	}
    }
   	for(i=0;i<n2;i++){
      	for(j=0;j<k;j++){
         	if(c[j]==b[i])
           		break;
      	}
     	if(j==k){
       		c[k]=b[i];
       		k++;
     	}
   	}
   	for(i=0;i<k;i++){
    	printf("%d ",c[i]);
  	}
}

void set_intersection(int A[],int B[], int m, int n){
  int i,j;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(A[i]==B[j]){
        printf("%d ",A[i]);
      }
    }
  }
}

void set_diff(int a[],int b[], int n1, int n2){
  int max;
  max = n1>n2 ? n1 : n2;
  int i,j,l,k=0, c[max];
 
  for( i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        if(b[j]==a[i])
          break;
    }
    if(j==n2){
        for(l=0;l<k;l++){
            if(c[l]==a[i])
              break;
        }
        if(l==k){
            c[k]=a[i];
            k++;
        }
    }
  }

  for(i=0;i<k;i++){
    printf("%d ",c[i]);
  }
}


int main(void) {
  	int sizeA, sizeB, i, j;
 	  printf("Enter size of set A: ");
  	scanf("%d", &sizeA);
  	int arrA[sizeA];

	  printf("Enter numbers [n1 n2 n3] of setA: ");
	  for(i=0; i<sizeA; i++){
    	scanf("%d", &arrA[i]);
  	}

  	printf("Enter size of set B: ");
  	scanf("%d", &sizeB);
  	int arrB[sizeB];
	  printf("Enter numbers [n1 n2 n3] of setB: ");

   	for(i=0; i<sizeB; i++){
    	scanf("%d", &arrB[i]);
  	}


 

    printf("\nSet Union: ");
  	set_union(arrA, arrB, sizeA, sizeB);

    printf("\nSet Intersection: ");
  	set_intersection(arrA, arrB, sizeA, sizeB);

    printf("\nSet Difference A-B: ");
  	set_diff(arrA, arrB, sizeA, sizeB);

	  printf("\nSet Difference B-A: ");
  	set_diff(arrB, arrA, sizeB, sizeA );
  return 0;
}
