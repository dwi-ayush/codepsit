#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter dimension of Matrix:");
    scanf("%d",&n);
    int **arr= (int**)malloc(sizeof(int*)*n);
    for (int i=0;i<n;i++){
        *(arr+i)=(int*)malloc(sizeof(int)*n);
    }
    printf("Enter matrix elements:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",*(arr+i)+j);
        }
    }
    //transpose
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //reverse all rows
    for (int i=0;i<n;i++){
        for (int j=0;j<n/2;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }
    printf("\nmatrix after rotation:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
   return 0;
}