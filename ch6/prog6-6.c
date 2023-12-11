#include<stdio.h>
#include<stdlib.h>

int main(){

    int w,h;
    printf("input your weight & height(ex:80,170):");
    scanf("%d,%d",&w,&h);

    if(w>90 && h<180)
        printf("過重\n");
        else
            printf("不會過重\n");

    return 0;
}