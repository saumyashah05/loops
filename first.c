// print multiplication table of a given number n
#include <stdio.h>

int main(){

    int num;
    printf("enter a number \n");
    scanf("%d",&num);

    for(int i=1;i<=10;i++ )
    {
        printf("%d * %d = %d \n", num,i,num*i);
    }

    return 0;

}