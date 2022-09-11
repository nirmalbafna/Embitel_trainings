#include<stdio.h>
int bitExtracted(int number, int k, int p)
{
    return (((1 << k) - 1) & (number >> (p - 1)));
}
 
int main()
{
    int number, k, p;
    printf("Enter the number : ");
    scanf("%d",&number);
    printf("Enter the bits : ");
    scanf("%d",&k);
    printf("Enter the position : ");
    scanf("%d",&p);
    printf("The extracted number is %d",
               bitExtracted(number, k, p));
    return 0;
}