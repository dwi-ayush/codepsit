#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int numcp=n;
    int numcp2=numcp;
    int c=0;
    while(n!=0){
        c++;
        n=n/10;
    }
    // printf("%d",c);
    int sum=0;
    while(numcp!=0){
        int d=numcp%10;
        printf("%f",(pow(d,c)+(float)sum));
        sum=(int)(pow(d,c)+(float)sum);
        printf("%d\t%f\n",d,pow(d,c));
        numcp=numcp/10;
    }
    printf("%d",sum);
    if (numcp2==sum)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
    // printf("%d",c);

}