#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    skip:while(n>0){
        if(n==4){
            n--;
            goto skip;
        }
        printf("current count is : %d \n",n);
        n--;
    }
}