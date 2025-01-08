#include <stdio.h>
int main(){
    int n=7;
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter element arr[%d]:",i);
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    printf("Array before reverse:\t");
    for (int i=0;i<n-1;i++){
        printf("%d, ",arr[i]);
    }
    printf("%d",arr[n-1]);
    printf("\n");
    for (int i=0;i<=(n/2);i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Array after reverse:\t");
    for (int i=0;i<n-1;i++){
        printf("%d, ",arr[i]);
    }
    printf("%d",arr[n-1]);
    printf("\n");
}