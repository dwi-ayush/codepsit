#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p,t;
    float r;
    float si,ci;
    scanf("%d %f %d",&p,&r,&t);
    si=(p*r*t)/100;
    float rbyt=r;
    float oneplusrbyt=1+rbyt;
    float powoprbt=pow(oneplusrbyt,t);
    ci=p*powoprbt;
    printf("%0.2f %0.2f",si,ci);
    return 0;
}