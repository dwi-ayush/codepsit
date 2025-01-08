#include <stdio.h>
int main(){
    int size;
    printf("Enter size of Array:");
    scanf("%d",&size);
    int arr[size];
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
    for (int i=low;i<=high;i++){
        printf("Enter the element at index %d:",i);
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter element to find:");
    scanf("%d",&key);
    for (int i=low;i<=high-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Binary search could not be implemented");
            return 0;
        }
    }
    l1:
    if (arr[mid]>key && high>low){
        high=mid-1;
        mid=(low+high)/2;
        goto l1;
    }
    else if(arr[mid]<key && high>low){
        low=mid+1;
        mid=(low+high)/2;
        goto l1;
    }
    else if(arr[mid]==key){
        printf("Element found at index %d",mid);
    }
    else {
        printf("Key does not exist");
    }
    
}