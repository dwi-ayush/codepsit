//wapicpp to insert an array
// of n size and sort first k elements in ascending order
// and remaining n-k in descending order

#include <iostream>
using namespace std;
int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    
    for (int i=0;i<k;i++){
        int minInd=i;
        for (int j=i+1;j<size;j++){
            if (arr[minInd]>arr[j]){
                minInd=j;
            }
        }
        int temp=arr[minInd];
        arr[minInd]=arr[i];
        arr[i]=temp;
    }
    for (int i=size-1;i>k;i--){
        int minInd=i;
        for (int j=i-1;j>=k;j--){
            if (arr[minInd]>arr[j]){
                minInd=j;
            }
        }
        int temp=arr[minInd];
        arr[minInd]=arr[i];
        arr[i]=temp;

    }
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}