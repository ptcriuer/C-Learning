#include<stdio.h>
#include<stdlib.h>

int main(){

    char ch;
    while (ch!=17&&ch!=3)
    {
        ch=getch();
        printf("ASCII of ch=%d\n",ch);
    }
    printf("您已按了Ctrl+q或Ctrl+c...\n");

    return 0;
}