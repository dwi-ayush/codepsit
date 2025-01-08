#include <stdio.h>
int main(){
    // printf("Enter the dimensions of matrix(seperated by space or newline):");
    int r,c;
    scanf("%d",&r);
    c=r;
    int mat[r][c];
    // printf("Enter the elements(seperated by space or newline):\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    // printf("the matrix is:\n");
    // for (int i=0;i<r;i++){
    //     for (int j=0;j<c;j++){
    //         printf("%d ",mat[i][j]);
    //     }
    //     printf("\n");
    // }
    int i=0,j=0;    
    while(i>=0 && i<r && j<c && j>=0){
        if (mat[i][j+1]==1){
            printf("R");
            j++;
        }
        else if (mat[i+1][j]==1){
            printf("D");
            i++;
        }
        else{
            break;
        }
    }

    return 0;
}