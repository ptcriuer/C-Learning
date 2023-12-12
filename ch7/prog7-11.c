#include<stdio.h>
#include<stdlib.h>

int main(){

    int sum;
    printf("1-1000之間的完美數:");

    for (int i = 1; i <=1000; i++)
    {
        sum = 0;
        for (int j = 1; j <i; j++)
        {
            if(i%j==0)
            sum+=j;
        }
        if(i==sum)
            printf("%d ",i);
    }
    

    return 0;
}