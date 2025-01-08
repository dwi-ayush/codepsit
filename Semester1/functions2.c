#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    // scanf takes values, & means the memory address of the given variable
    // printf prints the values, %d is the format specifier and means that we want
    // to print the integer
    printf("%d",a);
    return 0; 
}