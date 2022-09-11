//ANAGRAM
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Enter string no.1 :");
    scanf("%s",str1);
    printf("Enter string no. 2 :");
    scanf("%s",str2);

    if(strlen(str1)!=strlen(str2)){
        printf("Strings you have entered is not Anagram");
        return 0;
    }

    int arr1[26]={0},arr2[26]={0};
    for(int i=0;i<strlen(str1);i++){
        arr1[str1[i]-'a']++;
    }
    for(int i=0;i<strlen(str2);i++){
        arr2[str2[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            printf("Strings you have entered is not Anagram");
            return 0;
        }
    }
    printf("Strings you have entered is Anagram");

    return 0;

}