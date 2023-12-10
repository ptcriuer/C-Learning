#include<stdio.h>
#include<stdlib.h>

int main(){

    int a=5,b=3;
    printf("a=%d,b=%d\n",a,b);
    a+= a+(b++);
    printf("a=%d,b=%d\n",a,b);

    return 0;
}