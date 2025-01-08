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
    for (int i=0;i<=n-1;i++){
        for (int j=n-1;j>=0;j--){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
   return 0;
}