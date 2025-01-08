#include <stdio.h>
int fact(int);
int main(){
    printf("Enter a number to find the factorial of :");
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int a)
{
    if (a<=1)
        return 1;
    else 
        return a*fact(a-1);
}