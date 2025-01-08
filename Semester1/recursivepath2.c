#include <stdio.h>
#include <stdlib.h>
char * correctPath(int ** mat, int i, int j, int d, char lm){
    char * path=NULL;

    return path;
}
int main(){
    int d;
    scanf("%d",&d);
    int ** mat = (int**)malloc(sizeof(int*)*d);
    for (int i=0;i<d;i++)
        *(mat+i)=(int*)malloc(sizeof(int)*d);
    for (int i=0;i<d;i++)
        for (int j=0;j<d;j++)
            scanf("%d",&mat[i][j]);
    char * path=correctPath(mat,0,0,d,'R');
    return 0;
}