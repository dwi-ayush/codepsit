#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float d = pow(b,2)-(4*a*c);

    if(d>=0) {
        float R1=(-b+sqrt((b*b)-(4.0*a*c)))/(2.0*a);
        float R2=(-b-sqrt((b*b)-(4.0*a*c)))/(2.0*a);
        if(d==0){
            printf("REAL AND EQUAL\n");
        }
        else {
            printf("REAL AND DISTINCT\n");
        }
        printf("%0.2f %0.2f\n",R1,R2);

    }
    else {
        printf("IMAGINARY ROOTS\n");
        float R1r=-b/(2.0*a);
        float R2r=-b/(2.0*a);
        float R1i=sqrt(-((b*b)-(4.0*a*c)))/(2.0*a);
        float R2i=sqrt(-((b*b)-(4.0*a*c)))/(2.0*a);
        printf("%0.2f+%0.2fi %0.2f-%0.2fi",R1r,R1i,R2r,R2i);
    }
    return 0;
}
