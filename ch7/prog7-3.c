#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,sum = 0;
    printf("input a number:");
    scanf("%d",&n);

    for (int i = 1; i <= n; i+=2)
    {
        sum=sum+i;
    }
    printf("sum is %d\n",sum);
    return 0;
}