#include <stdio.h>
void RevArr(int arr[],int start,int end){
    if(end-start>0){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        RevArr(arr,start+1,end-1);
    }
}
void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={6,36,9,34,6,3,83};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Array before reversal:");
    printArray(arr,size);
    RevArr(arr,0,size-1);
    printf("Array after reversal:");
    printArray(arr,size);
}