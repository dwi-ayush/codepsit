#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float d= pow(b,2)-(4*a*c);

    if(-1000.00<=a && a<=1000.00)
    {
        if(-1000.00<=b && b<=1000.00)
        {
             if(-1000.00<=c && c<=1000.00)
             {

                if(d>=0) 
                {
                    float R1=(-b+sqrt((b*b)-(4.0*a*c)))/(2.0*a);
                    float R2=(-b-sqrt((b*b)-(4.0*a*c)))/(2.0*a);
                    if(d==0)
                        {
                        printf("REAL AND EQUAL\n");
                        printf("%0.2f %0.2f\n",R1,R2);
                        }
                    else
                        {
                        printf("REAL AND DISTINCTS\n");
                        }
                        printf("%0.2f %0.2f\n",R1,R2);
                }
                else {
                    printf("IMAGINARY ROOTS\n");

                    float R1r=-b/(2.0*a);
                    float R2r=-b/(2.0*a);
                    float R1i=sqrt(-((b*b)-(4.0*a*c)))/(2.0*a);
                    float R2i=sqrt(-((b*b)-(4.0*a*c)))/(2.0*a);  

                    printf("%0.2f+%0.2fi %0.2f-%0.2fi", R1r,R1i,R2r,R2i);
                }
             }
        }
    }
    return 0;
}