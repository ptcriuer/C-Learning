#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,j,n=11,sum;



    i = n-1;

    while (i!=0)
    {
        for (j = 1,sum =0; j <=i; j++)
            if(i%j==0)
            sum+=j;
        if (sum == i+1)
        {
            printf("最大質數為:%d\n",i);
            break;
        }
        else
            i--;        
    }

return 0;
}