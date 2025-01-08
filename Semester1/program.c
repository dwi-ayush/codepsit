#include <stdio.h>
#include <stdlib.h>
int main(){
    int r;
    printf("Enter an odd number of rows:");
    scanf("%d",&r);
    if (r%2!=0)
    {
        for (int i=1;i<=r;i++){
            for (int j=1;j<=abs((r/2)-i+1);j++)
            printf(" ");
            printf("*");
            for (int j=1;j<=2*((r/2)-abs((r/2)-i+1))-1;j++)
            printf(" ");
            if (i>=2&&i<r)
            printf("*");
            printf("\n");
        }
    }
    else 
    {
        printf("Please Enter an Odd number of rows");
    }
}