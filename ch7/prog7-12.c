#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,b,c,sum;
    printf("1000內的armstrong數為:");
    
    for (int i = 100; i <=999; i++)
    {   
        a = i/100;
        b = (i%100)/10;
        c = i%10;
        sum = a*a*a+b*b*b+c*c*c;

        if(sum==i)
        printf("%d ",i);
    }
    
    return 0;
}