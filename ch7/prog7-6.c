#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("請輸入要求因素的數值:");
    scanf("%d",&n);

    printf("可以整除%d的因數有:",n);

    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        printf("%d ",i);
    }
    

    return 0;
}