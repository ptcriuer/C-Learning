#include<stdio.h>
#include<stdlib.h>

int main(){

    int score;
    printf("輸入您的成績:");
    scanf("%d",&score);

        if(score>80 && score<100)
            printf("A\n");
            else if(score>60 && score<79)
                printf("B\n");
                else
                    printf("C\n");

    return 0;
}