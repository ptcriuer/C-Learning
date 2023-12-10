#include<stdio.h>
#include<stdlib.h>

int main(){

    float b,h;
    float total;
    printf("input b & h(ex:10,20):");
    scanf("%f,%f",&b,&h);
    total = b*h;
    printf("total = %f\n",total);

    return 0;
}