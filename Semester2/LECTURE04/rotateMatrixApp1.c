#include <stdio.h>
#include <stdlib.h>
void cycle(int ** arr,int i, int j, int n){
    n=n-1;
    int temp=*(*(arr+i)+j);
    *(*(arr+i)+j)=*(*(arr+n-j)+i);
    *(*(arr+n-j)+i)=*(*(arr+n-i)+n-j);
    *(*(arr+n-i)+n-j)=*(*(arr+n-(n-j))+n-i);
    *(*(arr+n-(n-j))+n-i)=temp;
}
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
        for (int j=i;j<=n-i-2;j++){
            cycle(arr,i,j,n);
        }
    }
    printf("Matrix Rotated 90 degree clockwise:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
    for (int i=0;i<=n-1;i++){
        for (int j=i;j<=n-i-2;j++){
            cycle(arr,i,j,n);
        }
    }
    printf("Matrix Rotated 180 degree clockwise:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}