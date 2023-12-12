#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i=0,j;
    
    do
    {
        do
        {
            printf("input number:");
            scanf("%d",&n);

        } while (n<1 || n>50);
        j=0;
        do
        {
            printf("*");
            j++;
        } while (j!=n);

        i++;
        printf("\n");
    }
    while (i<3);
    
    return 0;
}