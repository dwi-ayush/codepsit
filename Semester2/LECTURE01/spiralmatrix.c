#include <stdio.h>
#include <stdlib.h>
int spiralPrint(int ** mat, int dim,int x,int y){
    if (dim <= 1){
        printf("%d",mat[x][y]);
    }
    else{
        for (int j=0;j<=dim-2;j++){
            printf("%d ",mat[x+0][y+j]);
        }
        for (int i=0;i<=dim-2;i++){
            printf("%d ",mat[x+i][y+dim-1]);
        }
        for (int j=dim-1;j>=1;j--){
            printf("%d ",mat[x+dim-1][y+j]);
        }
        for (int i=dim-1;i>=1;i--){
            printf("%d ",mat[x+i][y+0]);
        }
        if (dim!=2){
            spiralPrint(mat,dim-2,x+1,y+1);
        }
    }
}
int main(){
    int d;
    int ** mat;
    scanf("%d",&d);
    mat = (int **)malloc(sizeof(int*)*d);
    for (int i=0;i<d;i++){
        *(mat + i)= (int *)malloc(sizeof(int)*d);
    }
    for (int i=0;i<d;i++){
        for (int j=0;j<d;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    spiralPrint(mat,d,0,0);
}