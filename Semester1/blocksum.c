#include <stdio.h>
int BlockSum(int * arr, int start,int end){
    if (end-start==1){
        return arr[start]-arr[end];
    }
    else{
        printf("here");
        return BlockSum(arr,start,((start+end)/2))-BlockSum(arr,(start+end)/2+1,end);
    }
}
int main(){
    int size;
  scanf("%d",&size);
  int arr[size];
  for (int i=0;i<size;i++)
    scanf("%d",&arr[i]);
  printf("%d",BlockSum(arr,0,size-1));
  return 0;
}