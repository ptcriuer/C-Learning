#include<stdio.h>
#include<stdlib.h>

int main(){

    int day;
    printf("請輸入1-7其中的一個數字:");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("今天要上班\n");
        break;
    case 6:
    case 7:
        printf("今天休息\n");
        break;
    default:
        printf("輸入錯誤\n");
        break;
    }


    return 0;
}