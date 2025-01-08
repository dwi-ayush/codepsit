#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum=n;
    while(sum>9){
        int s=0;
        while(sum!=0){
            s+=sum%10;
            sum=sum/10;
        }
        sum=s;
    }
    if(sum==1)
        printf("magic number");
    else    
        printf("Not magic number");
    return 0;
}