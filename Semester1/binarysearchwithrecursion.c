#include <stdio.h>
#include <stdlib.h>
int binarysearch(int* arr,int low,int high,int key){
    for (int i=low;i<=high;i++){
        printf("arr[%d]:%d\n",i,*(arr+i));
    }
    int mid=(low/high)/2;
    if (arr[mid]==key && high>low){
        printf("Element found at index %d:",mid);
        return mid;
    }
    else if(arr[mid]>key && high>low){
        return binarysearch(arr,mid+1,high,key);
    }
    else if(arr[mid]<key){
        return binarysearch(arr,low,mid-1,key);
    }
    else{
        printf("key not found!");
    }
}
int main(){
    int* arr;
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    arr=(int*)malloc(sizeof(int)*size);
    for (int i=0;i<=size-1;i++){
        printf("arr[%d]:",i);
        scanf("%d",arr+i);
    }
    // for (int i=0;i<=size-1;i++){
    //     printf("arr[%d]:%d\n",i,*(arr+i));
    // }
    int key;
    printf("Enter key to search:");
    scanf("%d",&key);
    binarysearch(arr,0,size-1,key);
}