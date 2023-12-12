#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i=2;
    int sum=0; 
    printf("請輸入正偶數:");
    scanf("%d",&n);

    while (n%2!=0 || n<=0)
    {
        printf("請輸入正偶數:");
        scanf("%d",&n);
    }
    while (i<=n)
    {
       sum = sum+i;
       i+=2; 
    }
    printf("sum is %d\n",sum);

    return 0;
}