#include<stdio.h>
#include<stdlib.h>

int main(){

    int sum=0,sum1=0,total;

    for (int i = 1; i <=49; i+=2)
    {
        sum=sum+i*i;   
    }
    for (int j = 2; j <=50; j+=2)
    {
        sum1=sum1+j*j;
    }
    total = sum-sum1;
    printf("%d\n",total);

    return 0;
}