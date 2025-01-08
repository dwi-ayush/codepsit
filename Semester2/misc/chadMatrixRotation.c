#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i,j;
    printf("Enter the number of rows and columns of a square matrix");
    scanf("%d",&n);
    int **arr,temp;
    arr = (int **)malloc(sizeof(int*)*n); // you should have 
    // typecasted correctly here it should be (int**) instead of (int*) because arr is of type int**
    // and it should be (int*) inside of malloc so it should be "sizeof(int*)*n"
    // but this is not the reason your code isn't working, right now, I am trying to figure it out
     for (i=0;i<n;i++)
         arr[i]=(int*)malloc(sizeof(int)*n);
    printf("Enter the elements of the matrix:");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) 
            scanf("%d",&arr[i][j]);
    }

    for(i=0;i<n/2;i++) {
        for(j=i;j<n-i-1;j++) { // THIS WAS THE PROBLEM!!! it should be j<n-i-1 instead of j<=n-i-1
            temp = arr[i][j];
            arr[i][j] = arr[n-1-j][i];
            arr[n-1-j][i] = arr[n-1-i][n-1-j];
            arr[n-1-i][n-1-j] = arr[j][n-1-i];
            arr[j][n-1-i] = temp;
            // adding debug aid code below
            // printf("(%d,%d) ",i,j); printing pairs to be cycled
        }
    }
    //printing the rotated matrix
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) 
            printf("%d  ",arr[i][j]);
            printf("\n");

    }   
}