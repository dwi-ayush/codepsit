#include <stdio.h>
#include <stdlib.h>
int main(){
    int r1,c1,r2,c2;
    scanf("%d",&r1);
    scanf("%d",&c1);
    scanf("%d",&r2);
    scanf("%d",&c2);
    if (c1!=r2){
        printf("Matrix multiplication is not possible");
        return 0;
    }
    int** m1;
    m1 = (int**)malloc(sizeof(int*)*r1);
    for (int i=0;i<r1;i++)
        m1[i]=(int*)malloc(sizeof(int)*c1);
    for (int i=0;i<r1;i++)
        for (int j=0;j<c1;j++)
            scanf("%d",&m1[i][j]);
    int** m2;
    m2 = (int**)malloc(sizeof(int*)*r2);
    for (int i=0;i<r2;i++)
        m2[i]=(int*)malloc(sizeof(int)*c2);
    for (int i=0;i<r2;i++)
        for (int j=0;j<c2;j++)
            scanf("%d",&m2[i][j]);
    int** pm = (int**)malloc(sizeof(int*)*r1);
    for (int i=0;i<r1;i++)
        pm[i] = (int*)malloc(sizeof(int)*c2);
    for (int r=0;r<r1;r++)
        for (int c=0;c<c2;c++){
            int sum = 0;
            for (int k=0;k<c1;k++)
                sum += m1[r][k] * m2[k][c];
            pm[r][c]=sum;
        }
    for (int i=0;i<r1;i++)
        for (int j=0;j<c2;j++){
            printf("%d ",pm[i][j]);
        }
        printf("\n");
    return 0;
}