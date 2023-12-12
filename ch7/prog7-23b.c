#include<stdio.h>
#include<stdlib.h>

int main(){

    int n=1,sum = 0;
    
    while (sum<=1000)
    {
        sum+=n;
        n++;
    }
    
    printf("the number is %d\n",n-1);

    return 0;
}