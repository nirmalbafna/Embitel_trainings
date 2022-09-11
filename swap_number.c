#include<stdio.h>
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a,b;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);

    printf("Before swap: a = %d and b = %d \n",a,b);
    swap(&a,&b);
    printf("After swap: a = %d and b = %d \n",a,b);
    return 0;
}