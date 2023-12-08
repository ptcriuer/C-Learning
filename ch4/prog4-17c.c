#include<stdio.h>
#include<stdlib.h>

int main(){

    char ch1,ch2;
    printf("input first char:");
    scanf("%c",&ch1);
    fflush(stdin);

    printf("input second char:");
    scanf(" %c",&ch2);
    printf("ch1=%c, ch2=%c\n",ch1,ch2);

    return 0;
}