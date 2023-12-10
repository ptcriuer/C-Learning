#include<stdio.h>
#include<stdlib.h>

int main(){

    float r,total;
    printf("input r:");
    scanf("%f",&r);
    total = (float)4/3*3.14*r*r*r; 
    printf("total = %f\n",total);

    return 0;
}