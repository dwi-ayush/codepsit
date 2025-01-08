// write a program in cpp
// to replace every element with the greatest element on the right hand side of the array
// and last element with -1
#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout<<"Enter the element "<<i<<" : ";
        cin>>arr[i];
    }
    for (int i=0;i<size-1;i++){
        int max=arr[i+1];
        for (int j=i+1;j<size;j++){
            if (arr[j]>max)
                max=arr[j];
        }
        arr[i]=max;
    }
    arr[size-1]=-1;

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}