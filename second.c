//multiplication table of a number in reverse order
#include <stdio.h>

int main(){

    int num;
    printf("enter a number \n");
    scanf("%d",&num);

    for(int i=10;i>=1;i-- )
    {
        printf("%d * %d = %d \n", num,i,num*i);
    }

    return 0;

}