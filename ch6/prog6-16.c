#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double a=3,b=-8,c=-3,x,xx,j;

    j = b * b - 4 * a * c;
    
    if(j>0)
    {
        x = (-b+sqrt(j))/(2*a);
        xx = (-b-sqrt(j))/(2*a);
        printf("兩根為%f,%f",x,xx);
    }
    else if(j==0)
    {
        x = -b/(2*a);
        printf("兩相等實根%f",x);
    }
        else
            printf("沒有實根\n");

    return 0;
}