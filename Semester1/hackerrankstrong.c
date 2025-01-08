#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isStrong(int n){
    int factsi=1;
    for (int i=1;i<=n;i++)
        fact*=i;
    if (fact == n)
        return 1;
    else 
        return 0;
        
}
int main() {
    int n;
    // scanf("%d",&n);
    if (isStrong(145))
        printf("145");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
