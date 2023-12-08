#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    char ch;

    printf("input a int:");
    scanf("%d",&num);
    fflush(stdin);
    
    printf("input a char:");
    ch = getchar();
    printf("num = %d,ASCII of ch = %d\n",num,ch);


    return 0;
}