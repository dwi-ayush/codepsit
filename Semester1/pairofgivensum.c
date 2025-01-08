#include <stdio.h>
int main(){
    int n=7;
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter element arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to check:");
    int num;
    scanf("%d",&num);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==num)
                printf("(%d,%d),",arr[i],arr[j]);
        }
    }
}