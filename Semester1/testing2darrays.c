#include <stdio.h>
#include <stdlib.h>
int main(){
    // arr[i][j] = *(*(arr+i)+j)
    // &arr[i][j] = *(arr+i)+j
    // arr[i] = *(arr+i)
    // &arr[i] = arr+i
    int arr[3][3]={0,1,2,3,4,5,6,7,8};
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            // printf("%p ---> %d    ",&arr[i][j],arr[i][j]);
            printf("%p ---> %d    ",*(arr+i)+j,*(*(arr+i)+j));
        }
        printf("\n");
    }
    printf("\n\n\n");
    for (int i=0;i<3;i++){
        // printf("%p --->      ",arr[i]);
        // printf("%p --->      ",*(arr+i));
        // printf("%p --->      ",&arr[i]);
        printf("%p ---> ",arr+i);
        printf("%d     ",&arr+i);
        
    }
    return 0;
}