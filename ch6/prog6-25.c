#include<stdio.h>
#include<stdlib.h>

int main(){

    int y=1900;

    start:
        if((y%4==0 && y%100!=0)||(y%400==0 && y%4000!=0))
                printf("%d\n",y);
                y+=1;
        if (y<=2000)
            goto start;
        
    return 0;
}