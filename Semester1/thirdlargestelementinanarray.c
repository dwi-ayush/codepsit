#include <stdio.h>
int main(){
    int arr[]={9,4,7,8,8,7,9,6,4,3,8};
    // insertion sort
    for (int i=1;i<=sizeof(arr)/sizeof(arr[0])-1;i++){
        for (int j=i;j>0;j--){
            if (arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int counter=1;
    int lastele=arr[sizeof(arr)/sizeof(arr[0])-1]+1;
    int i;
    for (i=sizeof(arr)/sizeof(arr[0])-1;i>0 && counter<=3 ; i--){
        if(arr[i]!=lastele){
            // printf("%d ",arr[i]);
            counter++;
        }
        lastele=arr[i];
    }
    printf("third largest element is :%d",arr[i+1]);

}