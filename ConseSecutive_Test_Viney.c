#include <stdio.h>
int main()
{
    int i,c=0;
    scanf("%d",&i);
    while(i>0){
        int t =i%10;
        i/=10;
        if(t==5){
            c++;
            if(c==3){
                printf("yes");
                break;
            }
        }
        else{
            c=0;
        }
    }
    if(c<3){
        printf("no");
    }
}
