#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,b,c;
    printf("輸入三角形的三邊長(ex:5,5,5):");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
        printf("可以組成三角形\n");
        else
            printf("不能組成三角形\n");

    return 0;
}