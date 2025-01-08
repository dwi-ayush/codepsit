#include <stdio.h>
int main(){
    int sum = 0;
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1;i<n;i++)
        if (n%i==0)
            sum+=i;
    if(sum==n)
        printf("Perfect Number");
    else
        printf("Lol lol not perfect number");
}