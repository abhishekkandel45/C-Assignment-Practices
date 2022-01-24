/*
Q10. Write a C program to input n numbers in an array, calculate the sum of all even numbers and all 
odd numbers in the array and print the larger sum. 
Example: 
If the array contains the following elements: 
2, 3, 3, 5, 4, 8, 7, 11, 2 
The sum of all even elements is 2+4+8+2=16 
Sum of all odd elements is 3+3+5+7+11=29 
Therefore, the output should be 29.
*/
#include <stdio.h>
int printSumOfArray (int arr[], int size){
	int i;
	int sum=0;
	for(int i=0; i<size; i++){
		sum+=arr[i];
		if(i==0) printf("%d", arr[i]);
		else printf("+%d", arr[i]);
	}
	printf("=%d", sum);
	return sum;
}

int main(void) {
  int n,i, inp;
  printf("Enter total number in array: ");
  scanf("%d", &n);
  int arr[n];
  int odd_arr[n], odd_size = 0, sum_odd=0;
  int even_arr[n], even_size = 0, sum_even=0;
  int sum_max=0;

  printf("Enter numbers [n1 n2 n3]: ");
  for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  for (i=0; i<n; i++){
    inp = arr[i];
    if(inp%2==0) {
		  even_arr[even_size] = inp;
		  even_size++;
	  }else {
	  	odd_arr[odd_size] = inp;
  		odd_size++;
	  }
  }

  printf("\nThe sum of all even elements is:");
  sum_even = printSumOfArray(even_arr, even_size);

  printf("\nSum of all odd elements is:");
  sum_odd = printSumOfArray(odd_arr, odd_size);

  sum_max = sum_even > sum_odd ? sum_even : sum_odd;

  printf("\nTherefore, the output should be %d. \n", sum_max);

  return 0;
}