#include<stdio.h>
int main(){
    int num,val,nbits,pos,newval;
    printf("Enter the number");
    scanf("%x",&num);
    printf("Enter the position :");
    scanf("%d",&pos);
    printf("Enter the number of bits : ");
    scanf("%d",&nbits);
    printf("Enter the new value : ");
    scanf("%x",&newval);
    val=(nbits<<1)-1;
    num = num & ~(val<<pos);
    newval = num | (newval<<pos);
    printf("After replacing the bits : 0x%x",newval);
    return 0;
}