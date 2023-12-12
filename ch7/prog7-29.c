#include<stdio.h>
#include<stdlib.h>

int main(){

    int count=0,password=1234,input;

    while (1)
    {
        printf("input password:");
        scanf("%d",&input);

        count++;

        if (input==password)
        {
            printf("輸入正確\n");
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