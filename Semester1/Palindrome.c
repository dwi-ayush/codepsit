#include <stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int copynumber=number;
    int reversenumber=0;
    while (number!=0){
        int digit=number%10; // 3
        reversenumber=reversenumber*10+digit;
        number = number/10;
    }
    if (reversenumber==copynumber)
        printf("Number is Palindrome");
    else 
        printf("Number is not Palindrome");
    return 0;
}