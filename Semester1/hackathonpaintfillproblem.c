#include <stdio.h>
#include <string.h>
void filler(char arr[][100000] , int x, int y){
    //pehle us point ke color ko save kare
        // color c = 
    char c=arr[x][y];
    // printf("%c",c);
    // us element ko counter ki value kar de
    arr[x][y]='l';
    if (arr[x-1][y]==c);
        filler(arr,x-1,y);
    if (arr[x+1][y]==c);
        filler(arr,x+1,y);
    if (arr[x][y+1]==c);
        filler(arr,x,y+1);
    if (arr[x][y-1]==c);
        filler(arr,x,y-1);
    // fir check kare ke aas pass wo colors hai ki nahi aur un elements ke sath bhi yahi kare
}
int main(){
    // 5
    // a a a b c
    // a a b b c 
    // a a b b c
    // b b c c d
    // c c a a d
    
    int rows;
    printf("Enter rows:");
    scanf("%d",&rows);    
    char arr[rows][100000];
    for (int i=0;i<=rows-1;i++){
        scanf("%s",&arr[i]);
    }
    printf("\n");
    for (int i=0;i<=rows-1;i++){
        printf("%s\n",arr[i]);
    }
    int cols=strlen(arr[0]);
    // printf("%d",cols);
    printf("\n");
    printf("%d",cols);

    int counter=1;
    // for (int i=0;i<=rows-1;i++){
    //     for (int j=0;j<=cols-1;j++){
    //         rec_painter(arr,i,j,&counter);
    //     }
    // }

    // 5
    // aaabc
    // aabbc 
    // aabbc
    // bbccd
    // ccaad
    filler(arr,0,0);
    printf("\n");
    for (int i=0;i<=rows-1;i++){
        printf("%s\n",arr[i]);
    }

}