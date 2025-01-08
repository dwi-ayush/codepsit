
// wap in c to input two numbers from the user and subtract them and display the results

#include <stdio.h>
int main(){
    printf("Enter a: ");
    int a,b;
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d", &b);
    int c = a - b;
    printf("The answer of a - b is %d\n", c);
}