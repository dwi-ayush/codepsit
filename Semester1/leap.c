#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int year;
    scanf("%d",&year);
    if (year%4==0 && year%100 !=0 || year%400==0){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
