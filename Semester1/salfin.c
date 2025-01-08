#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float sal;

    scanf("%d",&sal);
    sal=sal+20*sal/100+25*sal/100;
    printf("%0.f",sal);
    return 0;
}