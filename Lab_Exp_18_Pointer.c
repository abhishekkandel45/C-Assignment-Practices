#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50}, i;
    for(i = 0; i < 5; i++)
        printf("value stored in arr[%d] = %d\n",i,*(arr+i));
    return 0;
}