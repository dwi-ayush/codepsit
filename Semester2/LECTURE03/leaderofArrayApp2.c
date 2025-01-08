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
    int * sk = (int*)malloc(sizeof(int)*size);
    int top=-1;
    sk[++top]=arr[size-1];
    for (int i=size-2;i>=0;i--)
        if(arr[i]>=sk[top]) sk[++top]=arr[i];
    printf("top array:");
    while(top!=-1){
        printf("%d ",sk[top]);
        top--;
    }
    return 0;
}