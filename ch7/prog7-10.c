#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    float sum=0;
    printf("請輸入要計算的數值:");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        sum=sum+(float)1/i;
    }
    printf("sum is %f\n",sum);

    return 0;
}