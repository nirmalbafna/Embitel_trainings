#include<stdio.h>
int main(){
    int num,nbits,pos,val;
    printf("Enter the number :");
    scanf("%x",&num);
    printf("enter the position : ");
    scanf("%d",&pos);
    printf("Enter the bits : ");
    scanf("%d",&nbits);
    val=(nbits<<1)-1;
    num = num | (val<<pos);
    printf("After setting the bits : 0x%x",num);
    return 0;
}