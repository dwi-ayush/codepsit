#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * availablePathfromCurrentPos(int ** arr,int i,int j,int d,char lm){
    // static int co=0;
    // co++;
    // if (co>=50){
    //     exit(0);
    // }
    char * availablePoints=(char*)malloc(sizeof(char)*5);
    int counter=0;
    // availablePoints={};
    // printf("%d",arr[0][0]);
    if (j-1>=0 && lm!='R' && arr[i][j-1]==1){
        availablePoints[counter++]='L';
        // printf("hi");
    }
    if (i-1>=0 && lm!='D' && arr[i-1][j]==1){
        availablePoints[counter++]='U';
        // printf("hi");
    }
    if (j+1<=d-1 && lm!='L' && arr[i][j+1]==1){
        availablePoints[counter++]='R';
        // printf("hi");
    }
    if (i+1<=d-1 && lm!='U' && arr[i+1][j]==1){
        availablePoints[counter++]='D';
        // printf("hi");
    }
    availablePoints[counter]='\0';
    return availablePoints;
}
void Mover(int ** mat, int curi, int curj, int d, char lm){
    char * moves = availablePathfromCurrentPos(mat,curi,curj,d,lm);
    if (strlen(moves)==1){
        // printf("%c",moves[0]);
        if (moves[0]=='R'){
            lm='R';
            curj++;
        }
        if (moves[0]=='L'){
            lm='L';
            curj--;
        }
        if (moves[0]=='U'){
            lm='U';
            curi--;
        }
        if (moves[0]=='D'){
            lm='D';
            curi++;
        }
        Mover(mat,curi,curj,d,lm);
    }
    else if (strlen(moves)==0){
        return;
    }
    else{
        for (int i=0;i<strlen(moves);i++){
            printf("\n->");
            if (moves[i]=='R'){
                printf("%c",moves[i]);
                lm='R';
                curj++;
                Mover(mat,curi,curj,d,lm);
                curj--;
            }
            if (moves[i]=='L'){
                printf("%c",moves[i]);
                lm='L';
                curj--;
                Mover(mat,curi,curj,d,lm);
                curj++;
            }
            if (moves[i]=='U'){
                printf("%c",moves[i]);
                lm='U';
                curi--;
                Mover(mat,curi,curj,d,lm);
                curi++;
            }
            if (moves[i]=='D'){
                printf("%c",moves[i]);
                lm='D';
                curi++;
                Mover(mat,curi,curj,d,lm);
                curi--;
            }
        }
    }
}
char * pathRet(int ** mat, int i, int j, int d, int lm){
    char * path= (char *)malloc(sizeof(char)*1);
    char * availed=availablePathfromCurrentPos(mat,i,j,d,lm);
    path[0]=0;
    while(1){
        if (strlen(availed)>0){

        }
        else{
            if (i==d-1 && j==d-1){
                break;
            }
            else{

            }
        }
    }
    return path;
}
char * correctPath(int ** mat,int i, int j, int d, char lm){
    printf("correct path is called\n");
    char * corpath=(char*)malloc(sizeof(char)*100);
    int counter=0;
    corpath[0]='\0';
    char * ap=availablePathfromCurrentPos(mat,i,j,d,lm);
    while (strlen(ap)==1){
        printf("I am in while\n");
        if (ap[0]=='R'){
            j++;
            lm='R';
        }
        if (ap[0]=='L'){
            j--;
            lm='L';
        }
        if (ap[0]=='D'){
            i++;
            lm='D';
        }
        if (ap[0]=='U'){
            i--;
            lm='U';
        }
        corpath[counter++]=ap[0];
        corpath[counter]='\0';
        printf("printing corpath in the while just to yk:%s\n",corpath);
        free(ap);
        ap=availablePathfromCurrentPos(mat,i,j,d,lm);
    }
    if (strlen(ap)==0 && i==d-1 && j==d-1){
        printf("wohooo printing path before returning:%s\n",corpath);
        return corpath;
    }
    else if (strlen(ap)==0){
        corpath[0]='\0';
        printf("damn... printing path before returning:%s\n",corpath);
        return corpath;
    }
    else{
        for (int l=0;l<strlen(ap);l++){
            if (ap[l]=='R'){
                strcpy(corpath,correctPath(mat,i,j+1,d,'R'));
            }
            if (ap[l]=='L'){
                strcpy(corpath,correctPath(mat,i,j-1,d,'L'));
            }
            if (ap[l]=='U'){
                strcpy(corpath,correctPath(mat,i-1,j,d,'U'));
            }
            if (ap[l]=='D'){
                strcpy(corpath,correctPath(mat,i+1,j,d,'D'));
            }
        }
        printf("printing path before returning:%s\n",corpath);
        return corpath;
    }
    return corpath;
}
int main(){
    int ** mat;
    int d;
    scanf("%d",&d);
    mat = (int**)malloc(sizeof(int*)*d);
    for (int i=0;i<d;i++){
        mat[i]= (int *)malloc(sizeof(int)*d);
    }
    for (int i=0;i<d;i++){
        for (int j=0;j<d;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("the matrix is : \n");
    for (int i=0;i<d;i++){
        for (int j=0;j<d;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf(" here is the correct path:%s",correctPath(mat,0,0,d,'R'));
    return 0;
}