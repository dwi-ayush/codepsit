#include <stdio.h>
int main(){
    int number; //number = 5
    printf("Enter a number:");
    scanf("%d",&number);
    int counter=0; // counter = 0
    for (int i=1;i<=number;i++) // i = 1
    { 
        if (number%i==0)
            counter++;
    }
    if (counter == 2)
        printf("Number is Prime");
    else 
        printf("Number is not Prime");
    return 0;
}