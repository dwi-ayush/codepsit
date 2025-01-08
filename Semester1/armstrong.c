#include <stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
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
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}