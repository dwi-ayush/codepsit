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
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                printf("%d ",arr[i]);
        }
    }
}