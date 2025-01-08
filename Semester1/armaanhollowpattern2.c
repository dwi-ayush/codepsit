#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    for (int i=1;i<=(r/2);i++){
        // printf("%d",i);
        // printf("%d",(r/2)-i+1);
        for (int j=1;j<=(r/2)-i+1;j++)
        printf(" ");
        printf("*");
        // printf("%d",2*(i-1)-1);
        for (int j=1;j<=2*(i-1)-1;j++)
        printf(" ");
        if(i!=1)
        printf("*");
        printf("\n");
    }
    for (int i=r-(r/2);i>=1;i--){
        // printf("%d",i);
        for (int j=1;j<=(r/2)-i+1;j++)
        printf(" ");
        printf("*");
        for (int j=1;j<=2*(i-1)-1;j++)
        printf(" ");
        if(i!=1)
        printf("*");
        printf("\n");
    }
    printf("\nPress any key to exit...");
    getch();
    return 0;
}