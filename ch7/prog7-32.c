#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,n,count=0;

    printf("請輸入數字:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if(n%i==0)
        count++;
    }        
    if (count>2)
        printf("非質數\n");
    else
        printf("質數\n");
    
    
    return 0;
}   