#include<stdio.h>
#include<stdlib.h>

int main(){

    int month;

    printf("input month:");
    scanf("%d",&month);

    if(month>=3 && month<=5)
        printf("春季\n");
        else if(month >=6 && month<=8)
            printf("夏季\n");
            else if(month >=9 && month <=11)
                printf("秋季\n");
                else
                    printf("冬季\n");
    return 0;
}