#include <stdio.h>
int main(){
    int n,c=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        if (n%i==0)
        c++;
    }
    if (c==1){
        int r=0;
        while(n!=0){
            r=r*10+(n%10);
            n=n/10;
        }
        c=0;
        for (int i=1;i<r;i++){
            if (r%i==0)
            c++;
        }
        if (c==1)
            printf("number is twisted prime");
        else
            printf("number is not twisted prime");
    }
    else{
        printf("Number is not twisted prime number");
    }
}