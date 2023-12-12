#include<stdio.h>
#include<stdlib.h>

int main(){

    int sum=1;

    while (1)
    {
        if(sum%3==1 && sum%5==3 && sum%7==2)
        {
            printf("最少有%d隻兔子\n",sum);
            break;
        }
        else
            sum++;
    }
    

    return 0;
}