#include<stdio.h>
#include<stdlib.h>

int main(){

    int sum=0;

    for (int i = 1; i <=100; i++)
    {
        if(i%3==0&&i%8==0)
        sum=sum+i;
    }
    printf("sum is %d\n",sum);

    return 0;
}