#include<stdio.h>
#include<stdlib.h>

int main(){

    float x,y;
    printf("輸入x & y座標:(ex4.5,5.4)");
    scanf("%f,%f",&x,&y);

    if(x>0 && y>0)
        printf("第一象限\n");
        else if (x<0 && y>0)
            printf("第二象限\n");
            else if(x<0 && y<0)
                printf("第三象限\n");
                else if(x>0 && y<0)
                    printf("第四象限\n");
                    else
                        printf("不屬於任意象限\n");       

    return 0;
}