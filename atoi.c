//atoi
#include<stdio.h>
int main(){
    char str[100];
    int num,res=0;
    printf("Enter the string: ");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        num = str[i]-'0';
        res=res*10+num;
    }
    printf("Value in integer is %d",res);
    return 0;
}