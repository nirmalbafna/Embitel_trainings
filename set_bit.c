// set bit
#include<stdio.h>
int main(){
    int num,pos;
    printf("Enter any number");
    scanf("%d",&num);
    printf("Enter the position");
    scanf("%d",&pos);
    num = num |(1<<pos);
    printf("Value after setting bits : %d",num);
    return 0;
}