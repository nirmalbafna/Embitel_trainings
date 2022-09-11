#include<stdio.h>
int main(){
    int num,sum,rem;
    printf("Enter the no.");
    scanf("%d",&num);
    while(num>9){
        sum=0;
        while(num!=0){
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }
        num=sum;
    }
    printf("Sum is : %d",sum);
}