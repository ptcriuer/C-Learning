#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,b,c;
    printf("輸入三角形的三邊長(ex:5,5,5):");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
        if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            printf("可以組成直角三角形\n");
        else if (a*a+b*b<c*c || b*b+c*c<a*a || c*c+a*a<b*b)
            printf("可以組成鈍角三角形\n");
        else
            printf("可以組成銳角三角形\n");
    else
            printf("不能組成三角形\n");
    return 0;
}