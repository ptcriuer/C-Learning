#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    int i =2;
    int sum = 0;
    do
    {
        printf("請輸入數值:");
        scanf("%d",&n);
    } while (n%2!=0 || n<=0);
    
    while (i<=n)
    {
        sum = sum +i;
        i+=2;
        
    }
    printf("sum is %d\n",sum);

    return 0;
}