#include<stdio.h>
#include<stdlib.h>

int main(){

    int sum;
    int i;
    for (i = 1,sum =0; sum <=1000; i++)
    {
        sum+=i;
    }
    
    printf("the number is %d\n",i-1);

    return 0;
}