 #include<stdio.h>
  int evenodd(int);
  int absolute(int);
  int main()
  {
        int number,remainder;
        printf(" Enter an integer number: ");
        scanf("%d",&number);
        printf("Absolute of %d is  %d\n",number,absolute(number));
        evenodd(number);
        return(0);
    }

  int evenodd(int number)
  {
        int remainder;
        remainder = absolute(number) % 2;
        switch(remainder){
                case 0 : printf("\n %d is an even number.",number);
                break;
                case 1 : printf("\n %d is an odd number.",number);
                break;
    }
    return 0;
}
int absolute(int n)
{
    if(n < 0)            // if number is negative, say -n
    return -n;   // return -(-n) which is +n.
    
    return n;           // Otherwise, return n.
} 