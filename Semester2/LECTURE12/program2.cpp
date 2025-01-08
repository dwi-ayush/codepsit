//wapicpp to find frequency of each element present in array
#include <iostream>
using namespace std;
int main(){
    int freq[15]={};
    int arr[]={5,6,7,0,3,3,2,6,3,2,3,5,2,6,2,3,14,14,14,4,3,3,3,8,8,8,7,7,4};
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        freq[arr[i]]++;
    }
    cout<<"Frequency of array elements:";
    for (int i=0;i<15;i++){
        cout<<"frequency of "<<i<<" is "<<freq[i]<<endl;
    }
    return 0;
}