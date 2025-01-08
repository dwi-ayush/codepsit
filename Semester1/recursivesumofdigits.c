#include <stdio.h>
int sumofdigits(int n){
    int sod=0;
    for(;n!=0;n/=10)
        sod+=n%10;
    return sod;
}
int main(){
    int k;
    int ch;
    long isod=0;
    do
    {
        ch = getchar();
        if (ch != ' ')
            isod+=ch-48;
    } while (ch != ' ');
    scanf("%d",&k);
    isod=sumofdigits(isod)*k;
    while(isod>9){
        isod=sumofdigits(isod);
    }
    printf("%ld",isod);
}