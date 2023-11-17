#include<stdio.h>
#include<stdlib.h>

int main(){
    int side1,side2,side3;
    printf("please input three lengths:");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3){
        printf("regular triangle!\n");
    }
    if(side1 != side2 || side2 != side3 || side3!= side1){
        printf("Not regular triangle!\n");
    }
    return 0;
}