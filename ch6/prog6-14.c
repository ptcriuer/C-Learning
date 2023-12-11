#include<stdio.h>
#include<stdlib.h>

int main(){

int y;
printf("請輸入年份:");
scanf("%d",&y);

if((y%4==0 && y%100!=0) || (y%400==0 && y%4000!=0))
    printf("閏年\n");
    else
        printf("不是閏年\n");

    return 0;
}