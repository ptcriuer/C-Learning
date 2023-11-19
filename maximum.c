#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c,max;
    printf("enter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a >=b && a>=c){
        max = a;
    }
    if(b > a && b>=c){
        max = b;
    }
    if(c > a && c > b){
        max = c; 
    }
    printf("%d is maximum.\n",max);
    return 0;
}