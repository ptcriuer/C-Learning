#include<stdio.h>
#include<stdlib.h>

int main(){

    float mile,km;
    printf("input mile:");
    scanf("%f",&mile);
    km = mile *1.6;
    printf("mile to km = %f\n",km);

    return 0;
}