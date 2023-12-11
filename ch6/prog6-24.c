#include<stdio.h>
#include<stdlib.h>

int main(){

    int i=0,sum=0;

    start:
        if(i%2!=0)
            sum = sum+i;
            i++;
        if(i<100)
            goto start;
    printf("sum is %d\n",sum);
    return 0;
}