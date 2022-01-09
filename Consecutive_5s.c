#include <stdio.h>

int main(){
  int num, last_chr, count=0, occurance_num=5;

  printf("Enter number: ");
  scanf("%d", &num);

  while(num){
    last_chr = num%10;
    if(last_chr==occurance_num) {
      count++;
      if(count>=3){
        printf("YES");
        return 0;
      }
    }else{
      count=0;
    }
    num = num/10;
  }
  printf("NO");
  return 0;
}
