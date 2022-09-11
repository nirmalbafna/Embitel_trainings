// itoa
#include<stdio.h>
int main(){
    int num,n,count=0,rem;
    printf("Enter a no. :");
    scanf("%d",&num);
    n=num;
    while(n!=0){
        count++;
        n=n/10;
    }
    char str[count];
    for(int i=0;i<count;i++){
        rem=num%10;
        str[count-(i+1)]=rem+'0';
        num=num/10;
    }
    str[count]='\0';
    printf("String is : %s",str);

}