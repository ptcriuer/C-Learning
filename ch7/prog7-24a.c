#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i=0,j;
    while (i!=3)
    {      
        printf("input number:");
        scanf("%d",&n);
        while (n<1 || n>50)
        {
            printf("input number:");
            scanf("%d",&n);
        }
        j=0;
        while (j!=n)
        {
            printf("*");
            j++;
        } 
        i++;
        printf("\n");
    }
    
    return 0;
}