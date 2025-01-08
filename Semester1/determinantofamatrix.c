#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int det(int** arr,int d){
    int deter=0;
    if (d==2){
        deter=arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
        return deter;
    }
    for (int z=0;z<d;z++){
        int ** newarr;
        newarr= (int**)malloc(sizeof(int*)*(d-1));
        for (int n=0;n<d-1;n++){
            newarr[n]=(int*)malloc(sizeof(int)*(d-1));
        }
        int r=0,c=0;
        for (int i=0;i<d-1;i++){
            if(r==0){
                r++;
            }
            c=0;
            for (int j=0;j<d-1;j++){
                if(c==z){
                    c++;
                }
                newarr[i][j]=arr[r][c];
                c++;
            }
            r++;
        }
        deter+=pow(-1,0+z+2)*arr[0][z]*det(newarr,d-1);
    }
    return deter;
}
int main(){
    printf("Enter the number of rows:");
    int r;
    scanf("%d",&r);
    printf("Enter the number of cols:");
    int c;
    scanf("%d",&c);
    if(r!=c){
        printf("Determinant doesn\'t exist for non-square matrix");
        return 0;
    }
    int ** arr;
    arr= (int**)malloc(sizeof(int*)*r);
    for (int i=0;i<r;i++){
        arr[i]=(int*)malloc(sizeof(int)*c);
    }
    printf("Enter Matrix Elements:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("enter element mat[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix:\n");
    //printing array
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    det(arr,r);
    printf("Determinant of Matrix is %d",det(arr,r));
    return 0;
}