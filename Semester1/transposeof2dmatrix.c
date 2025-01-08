#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter number of rows:");
    int r;
    scanf("%d",&r);
    printf("Enter number of cols:");
    int c;
    scanf("%d",&c);
    int arr[r][c],arrt[c][r];
    printf("Enter Matrix Elements:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("enter element mat[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Array:\n");
    //printing array
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            arrt[j][i]=arr[i][j];
        }
    }
    printf("Transpose Array:\n");
    //printing array
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
            printf("%5d",arrt[i][j]);
        }
        printf("\n");
    }

    return 0;
}