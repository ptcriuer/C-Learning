#include<stdio.h>
#include<stdlib.h>

int main(){

    int w;
    printf("請輸入1-4其中的數值:");
    scanf("%d",&w);

    switch (w)
        {
        case 1:
            printf("春天\n");
            break;
        case 2:
            printf("夏天\n");
            break;
        case 3:
            printf("秋天\n");
            break;
        case 4:
            printf("冬天\n");
            break;
        default:
            printf("輸入錯誤!\n");
            break;
        }





    return 0;
}