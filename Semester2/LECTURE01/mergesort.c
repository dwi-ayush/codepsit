#include <stdio.h>
void merge(int arr[], int s, int m, int e){
    int size1=m-s+1;
    int size2=e-m;
    int arrLeft[size1];
    int arrRight[size2];
    for (int i=0;i<size1;i++)
        arrLeft[i]=arr[s+i];
    for (int i=0;i<size2;i++)
        arrRight[i]=arr[m+1+i];
    int i,j,k;
    i=0;
    j=0;
    k=s;
    while (i<size1 && j<size2){
        if (arrLeft[i]>arrRight[j]){
            arr[k++]=arrRight[j++];
        }
        else{
            arr[k++]=arrLeft[i++];
        }
    }
    while(i<size1){
        arr[k++]=arrLeft[i++];
    }
    while(j<size2){
        arr[k++]=arrRight[j++];
    }
}
void mergeSort(int arr[], int s, int e){
    if (e-s<=0)
    return;
    int m=(s+e)/2;
    mergeSort(arr,s,m);
    mergeSort(arr,m+1,e);
    merge(arr,s,m,e);
}
void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={5,3,6,7,8,2,4,1,11,15,-10,};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Given array is:");
    printArray(arr,size);
    mergeSort(arr,0,size-1);
    printf("Sorted array is:");
    printArray(arr,size);
}