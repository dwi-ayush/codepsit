#include <stdio.h>
#include <stdlib.h>
int * onlymerge(int arr1[], int arr2[],int s1,int s2){
    int size1=s1;
    int size2=s2;
    int size3=size1+size2;
    int ctr1=0;
    int ctr2=0;
    int ctr3=0;
    int * arr3 = (int *)malloc(sizeof(int)*size3);

    while((ctr1>=0 && ctr1<size1) && (ctr2>=0 && ctr2<size2)){
        if(arr1[ctr1]>arr2[ctr2]){
            arr3[ctr3++]=arr2[ctr2++];
        }
        else{
            arr3[ctr3++]=arr1[ctr1++];
        }
    }
    while (ctr2<size2){
        arr3[ctr3++]=arr2[ctr2++];
    }
    while (ctr1<size1){
        arr3[ctr3++]=arr1[ctr1++];
    }
    return arr3;
}
int main(){
    int arr1[]={1,6,9};
    int arr2[]={2,4,6};
    int s1=3;
    int s2=3;
    int * arr3= onlymerge(arr1,arr2,s1,s2);
    for (int i=0;i<s1+s2;i++){
        printf("%d ",arr3[i]);
    }
}