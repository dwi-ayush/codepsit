#include <stdio.h>
int main(){
    int size,noteaten;
    scanf("%d",&size);
    scanf("%d",&noteaten);
    long bactual=0;
    for (int i=0;i<size;i++){
        int item;
        scanf("%d",&item);
        if(i==noteaten)
            continue;
        bactual+=item;
    }
    int bcharged;
    scanf("%ld",&bcharged);
    bcharged=bcharged;
    bactual=bactual/2;
    if (bcharged-bactual==0)
        printf("Bon Appetit");
    else
        printf("%ld",bcharged-bactual);
    return 0;
}
