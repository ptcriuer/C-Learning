#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char ch;
    printf("input a char(ex:0~9,A-Z,a-z):");
    scanf("%c",&ch);

    if(ch>=48 && ch<=57)
        printf("your input is number\n");
    if(ch>=65 && ch<=90)
        printf("your input is eng char\n");
    if(ch>=97 && ch<=122)
        printf("your input is eng char\n");
    return 0;
}