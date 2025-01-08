//Bubble sort by AS
#include <stdio.h>
int main(){
    int n=7;
    int arr[]={};
    // for (int i=0;i<n;i++){
    //     printf("Enter element arr[%d]:",i);
    //     int ele;
    //     scanf("%d",&ele);
    //     arr[i]=ele;
    // }

    //optimized reverse bubble sort version by Armaan Soni
    
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {  
                int temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }  
        }  
    }  
    printf("Array after sort :\t");
    for (int i=0;i<n-1;i++){
        printf("%d, ",arr[i]);
    }
    printf("%d",arr[n-1]);
    printf("\n");
}
// 6,5,4,3,2,1,0

// 5,6,4,3,2,1,0
// 5,4,6,3,2,1,0
// 5,4,3,6,2,1,0
// 5,4,3,2,6,1,0
// 5,4,3,2,1,6,0
// 5,4,3,2,1,0,6

// 4,5,3,2,1,0,6
// 4,3,5,2,1,0,6
// 4,3,2,5,1,0,6
// 4,3,2,1,5,0,6
// 4,3,2,1,0,5,6

// 3,4,2,1,0,5,6
// 3,2,4,1,0,5,6
// 3,2,1,4,0,5,6
// 3,2,1,0,4,5,6

// 2,3,1,0,4,5,6
// 2,1,3,0,4,5,6
// 2,1,0,3,4,5,6

// 1,2,0,3,4,5,6
// 1,0,2,3,4,5,6

// 0,1,2,3,4,5,6