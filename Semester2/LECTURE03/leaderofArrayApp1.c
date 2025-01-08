#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter the size of the array:");
    int size;
    scanf("%d",&size);
    int * arr = (int*)malloc(sizeof(int)*size);
    printf("Enter array elements:");
    for (int i=0;i<size;i++)
        scanf("%d",arr+i);
    int * leader = (int*)malloc(sizeof(int)*(size-1));
    int counter=0;
    for (int i=0;i<size-1;i++){
        int max=arr[i];
        for (int j=i+1;j<size;j++){
            if (arr[j]>max)
            max=arr[j];
        }
        if (max!=arr[i] && leader[counter-1]!=max){
            leader[counter++]=max;
        }
    }
    printf("The leader array is:");
    for (int i=0;i<counter;i++){
        printf("%d ",leader[i]);
    }
    return 0;
}