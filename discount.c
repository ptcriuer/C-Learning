#include<stdio.h>
#include<stdlib.h>

int main(){
    int people,total;
    printf("input number of customers:");
    scanf("%d",&people);
    total = people * 300;

    if(total <= 3000){
        printf("total=%d",total);
    }
    if(total > 3000){
        total = total * 0.8;
        printf("total=%d",total);
    }
    return 0;
}