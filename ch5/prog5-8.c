#include<stdio.h>
#include<stdlib.h>

int main(){

    int a=4,b=6,c=5,d=7,e=8,f=12,g=13;

    printf("%d-%d%%%d/%d=%d\n",f,a,b,a,f-a%b/a);
    printf("%d*%d%%%d*%d/%d=%d\n",d,c,f,b,a,d*c%f*b/a);
    printf("(%d%%%d)/%d*%d=%d\n",g,b,d,e,(g%b)/d*e);

    return 0;
}