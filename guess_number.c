#include<stdio.h>
#include<stdlib.h>

int main(){
    int number;
    int answer = 4;
    printf("input number:");
    scanf("%d",&number);

    if(number < answer){
        printf("Too small!\n");
    }
    if(number == answer){
        printf("bingo!\n");
    }
    if(number > answer){
        printf("Too large!\n");
    }
    return 0;
}