#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int side1,side2,side3;
    printf("enter the lengths:");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 *side1 || side3 * side3 + side1 * side1 == side2 * side2){
        printf("rectangular triangle!\n");
    }
    return 0;
}