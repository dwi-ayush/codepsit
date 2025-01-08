#include <stdio.h>
int main(){
    // Amazing Number
    // no having only three distinct factor.
    int c=0;
    int n;
    printf("Enter a number to check :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (n%i==0)
        c++;
    }
    if (c==3)
    printf("Number is Amazing!!!");
    else
    printf("Number is not Amazing!!!");
}