#include<stdio.h>
#include<stdlib.h>

int main(){

    char firstname[10];
    char lastname[10];

    printf("input your last name:");
    scanf("%s",lastname);
    printf("input first name:");
    scanf("%s",firstname);

    printf("your first name is %s,last name is %s\n",firstname,lastname);

    return 0;
}