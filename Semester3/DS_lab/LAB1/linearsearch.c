#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int* arr = (int*)malloc(sizeof(int)*n);
    printf("Enter array elements:");
    for (int i=0;i<n;i++) scanf("%d",arr+i);
    printf("Enter the element to search:");
    int key;
    scanf("%d",&key);
    int ind=-1;
    for (int i=0;i<n;i++){
        if (arr[i] == key){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n",ind);
    }
    return 0;
}