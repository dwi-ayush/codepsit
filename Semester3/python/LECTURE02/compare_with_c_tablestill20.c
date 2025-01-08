#pragma GCC optimize ("O12")
#include <stdio.h>
int main(){
    long long jim=1;
    for (int i=1;i<1000001;i++){
        for (int j=1;j<=1110;j++){
            jim=jim+i-j*i;
        }
    }
    printf("%lld",jim);
}   