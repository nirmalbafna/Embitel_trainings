#include<stdio.h>
#include <limits.h>
#include<math.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int largesum(int a[],int n){
    int currsum=a[0];
    int bigsum=a[0];
    for(int i=1;i<n;i++)
    {
        currsum = max(a[i],currsum + a[i]);
        bigsum = max(bigsum,currsum); 
    }
    return bigsum;
}
int main(){
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(a)/sizeof(a[0]);
    int res= largesum(a,n);
    printf("Largest sum is : %d",res);
    return 0;
}