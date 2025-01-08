#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num,revnum=0,copynum;
    scanf("%d",&num);
    copynum=num;
    while(num!=0){
        int dig=num%10;
        revnum=10*revnum+dig;
        // printf("%d\n",revnum);
        num=num/10;
    }
    if(revnum==copynum){
        printf("%d\n",copynum);
        printf("%d\n",revnum);
        printf("YES");
    }
    else{
        printf("%d\n",copynum);
        printf("%d\n",revnum);
        printf("NO");
    }
    return 0;
}
