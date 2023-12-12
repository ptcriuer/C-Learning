#include<stdio.h>
#include<stdlib.h>

int main(){

    int n=1,t,sum=0;

    while (n<=10)
    {
        t = n*n;
        n++;
        sum +=t;
        printf("%d ",t);
    }
    printf("\n");
    printf("sum is %d\n",sum);

    return 0;
}