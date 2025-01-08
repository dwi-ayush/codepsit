#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    printf("Enter a number to convert to binary:");
    int number;
    scanf("%d",&number);
    int numbercopy=number;
    int counter=0;
    while(numbercopy!=0){
        numbercopy=numbercopy/2;
        counter++;
    }
    // printf("counter is :%d",counter);
    int * binarr = (int*)malloc(sizeof(int)*counter);
    for (int i=counter-1;i>=0;i--){
        binarr[i]=number%2;
        number=number/2;
    }
    for (int i=0;i<counter;i++){
        printf("%d ",binarr[i]);
    }
    printf("\n");
    for (int i=0;i<counter;i++){
        binarr[i]=!binarr[i];
    }
    for (int i=0;i<counter;i++){
        printf("%d ",binarr[i]);
    }
    int bintodec=0;

    for (int i=counter-1;i>=0;i--){
        // printf("%d\n",bintodec);
        bintodec+=binarr[i]*pow(2,counter-i-1);
    }
    printf("\n%d\n",bintodec);
    return 0;
}