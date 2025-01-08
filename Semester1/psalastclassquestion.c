#include <stdio.h>
int main(){
    int arr[]={(int)NULL,(int)NULL};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int counter=1;
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
        if (max<arr[i]){
            printf("%d ",arr[i]++);
            max=arr[i];
            counter++;
        }
    }
    printf("count=%d",counter);
}