#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,sum=0;
	printf("Enter the number :\n");
	scanf("%d",&n);

	int *a;
	a=(int*)malloc(n*sizeof(int));

	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum of array is: %d",sum);
	return 0;
}