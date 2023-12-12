#include<stdio.h>
#include<stdlib.h>

int main(){

    int total=3000;
    int day=0;
    while(total>=5)
    {
        total = total/2;
        day++;
    }
    printf("day is %d\n",day);

    return 0;
}