#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,k;
    for (i = 1; i <= 5; i++)
    {
        j=5;
        while(j-i!=0)
        {
            printf(" ");
            j--;
        } 
        k=1;
        while (k<=j)
        {
            printf("%d",k);
            k++;
        }        
        printf("\n");
    }
        return 0;
}

