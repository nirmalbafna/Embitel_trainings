#include <stdio.h>

//convert decimal to binary

int main()
{
    int number,digit;
    int total_bits=31;
    printf("Enter a number for converting it to binary :-  ");
    scanf("%d",&number);
    while(total_bits>=0){
        digit=number>>total_bits;
        if(digit&1){
            printf("1");
        }
        else{
            printf("0");
        }
        total_bits-=1;
    }
    return 0;
}