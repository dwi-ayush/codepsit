#include <stdio.h>
int BlockSum(int * arr){
  int size=sizeof(arr)/sizeof(arr[0]);
  if (size==2){
    printf("here");
    return arr[0]-arr[1];
  }
  else{
    printf("here");
    int ar1[size/2],ar2[size/2];
    for (int i=0;i<size/2;i++){ 
        ar1[i]= arr[i];
    }
    for (int i=size/2;i<size;i++){
        ar2[i-size/2]=arr[i];
    }
    return BlockSum(ar1)-BlockSum(ar2);
  }
}
int main(){
    int arr[]={1,2,3,5,6,3,3};
  printf("%d",BlockSum(arr));
  return 0;
}