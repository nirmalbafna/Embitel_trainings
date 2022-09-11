#include<stdio.h>
int fib(int num){
    if(num<2){
        return num;
    }
    return fib(num-1)+fib(num-2);
}
int main(){
    int num,res;
    printf("Enter the number");
    scanf("%d",&num);
    res=fib(num);
    printf("Value of Nth term is %d",res);
    return 0;
}