#include<stdio.h>
#include<stdlib.h>

int main(){

    int cash,act,repay,r1000=0,r500=0,r100=0,r50=0,r10=0,r5=0,r1=0;
    printf("請輸入結帳金額與支付金額:(ex:300,500)");
    scanf("%d,%d",&act,&cash);

    if(act>cash)
    {
        printf("支付金額不足!\n");
    }
    else
    {
            repay = cash - act;
            r1000 = repay / 1000;
            repay = repay -(r1000 * 1000);

            r500 = repay / 500;
            repay = repay -(r500 * 500);

            r100 = repay / 100;
            repay = repay -(r100 * 100);

            r50 = repay / 50;
            repay = repay -(r50 * 50);

            r10 = repay / 10;
            repay = repay -(r10 * 10);

            r5 = repay / 5;
            repay = repay -(r5 * 5);
            
            r1 = repay / 1;
            repay = repay -(r1 * 1);
    }
    printf("要找%d張1000,%d張500,%d張100,%d個50,%d個10,%d個5,%d個1\n",r1000,r500,r100,r50,r10,r5,r1);
    return 0;
}