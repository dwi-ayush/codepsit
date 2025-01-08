#include <stdio.h>
#include <stdlib.h>
int main(){
    // printf("Enter number of elements in the array:");
    int size;
    scanf("%d",&size);
    int * arr= (int*)malloc(sizeof(int)*size);
    for (int i=0;i<=size-1;i++){
        // printf("Enter arr[%d]:",i);
        scanf("%d",arr+i);
    }

    // Insertion sort 
    for (int i=1;i<=size-1;i++){
        for (int j=i;j>0;j--){
            if (arr[j-1]<arr[j])
            break;
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }


    printf("\nThe final array is\n");
    for (int i=0;i<=size-1;i++){
        printf("arr[%d]:%d\n",i,arr[i]);
    }
}