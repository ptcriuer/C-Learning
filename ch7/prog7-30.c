#include<stdio.h>
#include<stdlib.h>

int main(){

    int count=0,password=1234,input;

    for (count = 1; count <=3; count++)
    {
        printf("輸入密碼:");
        scanf("%d",&input);

        if(input==password)
        {
            printf("正確\n");
            break;
        }
        if (count==3)
        {
            printf("輸入超過三次\n");
            break;
        }       
    }
    return 0;
}