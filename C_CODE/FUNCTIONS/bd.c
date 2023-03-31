#include<stdio.h>
int toBin(int);
int main(){
 int bnum;
    int dnum;
	printf("convert decimal to binary \n");
	printf("convert decimal to binary \n");    
    printf(" Input any decimal number ");
    scanf("%d",&dnum);
    bnum = toBin(dnum);
    printf("\n The Binary value is : %ld\n\n",bnum);
    return 0;}
int toBin(int dnum){
    int bnum=0,remainder,f=1;
    while(dnum != 0){
    remainder = dnum % 2;
        bnum = bnum + remainder * f;
        f = f * 10;
        dnum = dnum / 2;}
    return bnum;}