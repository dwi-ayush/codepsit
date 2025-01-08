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
    int biggestE=arr[0];
    for (int i=0;i<n;i++)
        if(biggestE<arr[i])
            biggestE=arr[i];
    printf("Biggest Element in the array is %d",biggestE);
}