#include<stdio.h>
#include<stdlib.h>

int main(){

    int sum=1;
    do
    {
        sum++;
    } while (sum%3!=1 || sum%5!=3 || sum%7!=2);
    
    printf("兔子最少有%d隻\n",sum);

    return 0;
}