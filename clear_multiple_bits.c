#include<stdio.h>
int main(){
    int num,val,pos,nbits;
    printf("Enter the number : ");
    scanf("%x",&num);
    printf("Enter the position : ");
    scanf("%d",&pos);
    printf("Enter the value of bits : ");
    scanf("%d",&nbits);
    val= (nbits<<1)-1;
    num = num & ~(val<<pos);
    printf("After clearing multiple bits : 0x%x ",num);
    return 0;

}