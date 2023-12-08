#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    printf("input a hex number:");
    scanf("%x",&num);
    printf("%o,%d",num,num);

    return 0;
}