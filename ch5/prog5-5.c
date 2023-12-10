#include<stdio.h>
#include<stdlib.h>

int main(){

    int a=4,b=6,c=12,d=35,e=50;

    printf("%d%%%d=%d\n",b,a,b%a);
    printf("%d%%%d=%d\n",c,b,c%b);
    printf("%d%%%d=%d\n",c,c,c%c);
    printf("%d%%%d=%d\n",d,e,d%e);
    printf("%d%%%d=%d\n",e,d,e%d);

    return 0;
}