// armstrong in range by AS
#include <stdio.h>
#include <math.h>
int main(){
    int number;
    int lb,ub;
    printf("Enter lower bound:");
    scanf("%d",&lb);
    printf("Enter upper bound:");
    scanf("%d",&ub);
    for (int i=lb;i<=ub;i++){
        number=i;
        int numbercopy=number;
        int numbercopy2=number;
        int digits=0;
        while(number!=0){
            digits++;
            number/=10;
        }
        // printf("%d",digits);
        float sum=0.0;
        while(numbercopy!=0){
            int dig=numbercopy%10;
            sum+=pow(dig,digits);
            numbercopy/=10;
        }
        if(numbercopy2==sum)
            printf("%d ",numbercopy2);
    }
    
}