#include<stdio.h>
#include<stdlib.h>

int main(){

    float T;
    float F;
    printf("input T:");
    scanf("%f", &T);
    F = (float)9/5*T+32;
    printf("F = %f\n",F);

    return 0;
}