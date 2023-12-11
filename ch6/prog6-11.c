#include<stdio.h>
#include<stdlib.h>

int main(){

    float wage,t;
    printf("輸入本月工作時數:");
    scanf("%f",&t);

        if(t<60)
            wage = t * 75;
            else if(t>61 && t<75)
                wage = 60 * 75 + (t-60) * 1.25 * 75;
                else
                    wage = 60 * 75 + 15 * 1.25 * 75 + (t-75) * 1.75 * 75;

    printf("你的薪水%.2f\n",wage);

    return 0;
}