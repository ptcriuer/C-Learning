#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    char ch;
    printf("input a char:");
    ch=getche();
    printf("\n");
    printf("your input is ");
    putchar(ch);
    printf("\n");
    printf("input a char:");
    ch=getch();
    printf("\n");
    printf("your input is ");
    putchar(ch);

    return 0;
}