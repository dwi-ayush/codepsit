#include <stdio.h>
#include <math.h>
#include <conio.h>
int fact(int n){
    int fact=1;
    if (n==0)
        return 1;
    for (int i=1;i<=n;i++)
        fact*=i;
    return fact;
}
int nCr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int n;
    printf("PASCAL'S TRIANGLE\nEnter the number of rows to print:");
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++){
        for (int j=1;j<=n-i-1;j++){
            printf(" ");
        }
        for (int j=0;j<=i;j++){
            printf("%d ",nCr(i,j));
        }
        printf("\n");
    }
    printf("Press any key to exit...");
    getch();
    return 0;
}
