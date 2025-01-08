#include <stdio.h>

int binarySearch(int* arr, int size, int k){
    int low = 0;
    int high = size-1;
    int mid = (low+high)/2;
    while(low<=high){
        if (arr[mid] == k){
            return mid;
        }
        else if (arr[mid] > k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid = (low+high)/2;
    }
    return -1;
}
int main(){
    int arr[] = {-45,-34,0,1,3,6,6,19,47,98,453,983,1003,1009};
    printf("%d",binarySearch(arr,sizeof(arr)/sizeof(arr[0]),452));
    return 0;
}