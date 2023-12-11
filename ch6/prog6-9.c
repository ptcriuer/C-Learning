#include<stdio.h>
#include<stdlib.h>

int main(){

    int a=0,b=0,c=0,i=0,score;

    start:
        i++;
        printf("請輸入第%d位學生成績:\n",i);
        scanf("%d",&score);

        if(score>=76 && score<=100)
            ++a;
        else if(score>=60 && score<=75)
                ++b;
                else
                    ++c;
        if(i<10)
            goto start;

printf("A=%d,B=%d,C=%d\n",a,b,c);    
    return 0;
}