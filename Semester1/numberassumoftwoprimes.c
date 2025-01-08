#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int n){
    int c=0;
    for (int i=1;i<=n;i++){
        if(n%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else 
        return 0;
}
int main() {
    int n;
    printf("Enter a number to check:");
    scanf("%d",&n);
    int c=0;
    for (int i=1;i<=(n/2);i++){
        if (isPrime(i))
            if(isPrime(n-i)){
                c++;
                printf("%d=%d+%d\n",n,i,n-i);
            }
    }
    if (c==0)
        printf("NOT POSSIBLE");
    return 0;

}
