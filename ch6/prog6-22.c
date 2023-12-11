#include<stdio.h>
#include<stdlib.h>

int main(){

    char ch;
    printf("input a char:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        printf("您輸入為a或A\n");
        break;
        case 'b':
        case 'B':
        printf("您輸入為b或B\n");
        break;

        default:
        printf("您輸入的並非a&A或b&B\n");
        break;
    }
    return 0;
}