#include<stdio.h>
#include<stdlib.h>

int main(){

    int w;
    printf("input your weight:");
    scanf("%d",&w);

    if(w>90)
        printf("過重\n");
        else
            printf("不會過重\n");

    return 0;
}