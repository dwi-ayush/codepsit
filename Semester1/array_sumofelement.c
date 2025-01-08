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
    int sum=0;
    for (int i=0;i<n;i++)
        sum+=arr[i];
    printf("Array Entered is:");
    for (int i=0;i<n-1;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d", arr[n-1]);
    printf("\n sum of array elements is %d",sum);
    return 0;
}