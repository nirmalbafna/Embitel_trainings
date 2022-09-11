#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a = *b;
    *b = temp;
}
int sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);

    printf("After sorting :");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}