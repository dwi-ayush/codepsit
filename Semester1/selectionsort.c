#include <stdio.h>
int main(){
    int arr[]={7,4,4,2,2,6,4,7,7,5,4,56,34,-3454,234};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++) { 
        int min_idx = i; 
        for (int j = i + 1; j < size; j++) { 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        } 
        if (min_idx != i) {
            int temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
        }
    } 
    //printing array
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}