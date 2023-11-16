#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,temp;
    printf("input first number:");
    scanf("%d",&a);
    printf("input second number:");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("a=%d,b=%d",a,b);

    return 0;
}