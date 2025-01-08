#include <stdio.h>
void pop(int *arr,int i,int size){
    for (int i=0;i<size-1;i++){
        
    }
}
int main(){
    int arr[]={1,2,3,3,3,4,3,35,6,43,34,45,34,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size-1;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                size--;
                pop(arr,i,size);
            }
        }
    }
}