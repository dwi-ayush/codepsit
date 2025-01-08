// Array palindrome by AS 
#include <stdio.h>
int main(){
    int n=8;
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter element arr[%d]:",i);
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    int flag=0;
    for (int i=0;i<=(n/2);i++){
        if(arr[n-i-1]!=arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Array is not Palindrome");
    else 
        printf("Array is Palindrome");
    printf("\n");
}