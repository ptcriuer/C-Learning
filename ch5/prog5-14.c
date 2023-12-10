#include<stdio.h>
#include<stdlib.h>

int main(){

    float mile,km;
    printf("input km:");
    scanf("%f",&km);
    mile = km/1.6;
    printf("km to mile = %f\n",mile);

    return 0;
}