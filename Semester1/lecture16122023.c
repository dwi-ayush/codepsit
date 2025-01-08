#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int* arr;
    arr=(int *)malloc(sizeof(int)*n);
    for (int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    // for (int i=0;i<n;i++){
    //     printf("%d ",*(arr+i));
    // }
    int key;
    scanf("%d",&key);
    //ascending sort check
    int sf=1;
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1])
            sf=0;
    }
    if (sf==1){
        //binary search
        int me=*(arr+(n/2)); 
    }
    else 
        printf("Binary search could not be implemented");
    return 0;
}