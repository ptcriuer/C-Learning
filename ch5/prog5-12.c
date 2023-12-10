#include<stdio.h>
#include<stdlib.h>

int main(){

    float T;
    float F;
    printf("input F:");
    scanf("%f", &F);
    T = (F-32)*(float)5/9;
    printf("T = %f\n",T);

    return 0;
}