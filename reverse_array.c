#include<stdio.h>
#include<stdlib.h>
int reverse(int a[],int n){
	int temp;
	for(int i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(int i=0;i<n;i++){
                printf("a[%d] is : %d \n",i,a[i]);
        }
	return 0;
}

int main(){
	int n;
	printf("Enter the number :\n");
	scanf("%d",&n);

	int *a;
	a=(int*)malloc(n*sizeof(int));

	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	reverse(a,n);
	return 0;
}