#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c,temp,temp1;
    printf("input first number:");
    scanf("%d",&a);
    printf("input second number:");
    scanf("%d",&b);
    printf("input third number:");
    scanf("%d",&c);

    temp = a;
    temp1 = b;
    b = c;
    a = temp1;
    c = temp;
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}