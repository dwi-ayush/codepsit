#include <stdio.h>
int determinant(int n, int i, int j, int arr[][n]){
    return 0;
}
int main(){
    printf("Enter order of matrix:");
    int n;
    scanf("%d",&n);
    int arr[n][n];

    //initializing the matrix with zeros (not necessary)
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }

    //entering the matrix
    printf("Enter array elements in a tabular format:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    //printing the matrix 
    printf("The matrix is:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }


    //calculating determinant
    for (int j=0;j<n;j++){
        
    }
    determinant(5,0,0,arr);
}
// 1 0 0 0 0 
// 0 1 0 0 0
// 0 0 1 0 0
// 0 0 0 1 0
// 0 0 0 0 1
