//WAPICPP Sieve of Eratosthenes
// O(nlog(logn))
#include <iostream>
using namespace std;
int main(){
    int n=200;
    int * arr = (int *)malloc((n-1)*sizeof(int));
    for (int i=0;i<n-1;i++){
        arr[i]=i+2;
    }
    // for (int i=0;i<n-1;i++){
    //     cout<<arr[i]<<" ";
    // }
    for (int i=0;i<n-1;i++){
        if (arr[i]!=-1){
            for (int j=i+1;j<n-1;j++){
                // cout<< "here";
                if (arr[j]%arr[i]==0){
                    arr[j]=-1;
                }
            }
        }
    }
    for (int i=0;i<n-1;i++){
        if(arr[i]!=-1)
            cout<<arr[i]<<" ";
    }
    
    
}