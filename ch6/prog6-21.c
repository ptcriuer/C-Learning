#include<stdio.h>
#include<stdlib.h>

int main(){

    char ch;
    printf("input a char:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        printf("您輸入為a\n");
        break;
        case 'b':
        printf("您輸入為b\n");
        break;

        default:
        printf("您輸入的並非a或b\n");
        break;
    }
    return 0;
}