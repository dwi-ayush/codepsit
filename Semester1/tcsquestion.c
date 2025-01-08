// a chocolate factory - QUestion 1
// is packing chocolates into the packets 
// the chocolate packets here represent an array of n number of integers value
// the task is to find the empty packets of chocolates and push it to the end of the belt 

#include <stdio.h>
void leftshift(int * arr, int i, int size){
    for (int j=i+1;j<size;j++){
        arr[j-1]=arr[j];
    }
    arr[size-1]=0;
}
int main(){
    int arr[]={1,2,0,3,0,0,3,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    int sizeu=size;
    for (int i=0;i<sizeu;i++){
        if(arr[i]==0){
            leftshift(arr,i,size);
            i--;
            sizeu--;
        }
    }
    printf("the array is :");
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}