// sum of numbers occuring in the multiplication table of 8
#include <stdio.h>

int main(){

    int sum=0;

    for(int i=1;i<=10;i++)
    {
        sum= sum + 8*i;
    }    
    printf("sum = %d", sum);

    return 0;

}