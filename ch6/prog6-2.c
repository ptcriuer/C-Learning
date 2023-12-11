#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    printf("請輸入一個整數:");
    scanf("%d",&num);

    if(num>0)
        printf("您輸入的整數大於0\n");
    
    if(num<0)
        printf("您輸入的整數小於0\n");
    
    if(num==0)
        printf("您輸入的整數為0\n");

    printf("程式結束\n");

    return 0;
}