#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("1-100可以被7和3整除的數:");

    for (int i = 1; i <=100; i++)
    {
        if(i%7==0 && i%3==0)
        printf("%d ",i);
    }
    
    return 0;
}