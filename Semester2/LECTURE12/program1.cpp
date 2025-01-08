//wapicpp to find total number of triangles possible
#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,6,8,3,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size-2;i++){
        for (int j=i+1;j<size-1;j++){
            for (int k=j+1;k<size;k++){
                if (arr[i]<arr[j]+arr[k] && arr[j]<arr[i]+arr[k] && arr[k]<arr[i]+arr[j]){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
    return 0;
}