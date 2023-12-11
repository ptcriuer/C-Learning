#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    printf("input a number:");
    scanf("%d",&num);

    if(num%2==0)
        printf("num是偶數\n");
    printf("num是奇數\n");

    return 0;
}