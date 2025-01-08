#include <stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int counter=0;
    for (int i=1;i<=number;i++){
        if(number%i==0)
            counter++;
    }
    if (counter==3)
        printf("Number is Amazing");
    else 
        printf("Number is not Amazing");
}