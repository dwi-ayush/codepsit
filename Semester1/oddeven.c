#include <stdio.h>
int main(){
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    if(!(n%2==0))
        printf("Odd Number");
    else    
        printf("Even Number");
}