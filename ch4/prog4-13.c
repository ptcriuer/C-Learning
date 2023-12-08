#include<stdio.h>
#include<stdlib.h>

int main(){

    char str[11];
    printf("input 10 bit string:");
    scanf("%s",str);
    printf("\"%s\"\n",str);
    printf("\\%20s\\\n",str);
    printf("\\%-20s\\\n",str);

    return 0;
}