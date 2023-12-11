#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    printf("input a number:");
    scanf("%d",&num);

    if(num<0)
        num=abs(num);
    
    printf("numner is %d\n",num);

    return 0;
}