//factorial of a given number
#include <stdio.h>

int main(){

    int fact=1;
    int num;

    printf("enter a number \n");
    scanf("%d", &num);

    for(num;num>=1;num--)
    {
        fact= fact*num;
    }
    printf("factorial of the number is %d", fact);

    return 0;

}