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
    // for (int i=0;i<n-1;i++){
    //     printf("%d, ",arr[i]);
    // }
    // printf("%d",arr[n-1]);
    int number;
    printf("Enter a number to find the sum pairs of:");
    scanf("%d",&number);
    for (int i=0;i<=n-2;i++){
        for (int j=i+1;j<=n-1;j++){
            if(arr[i]+arr[j]==number)
                printf("(%d,%d),",arr[i],arr[j]);
        }
    }
}