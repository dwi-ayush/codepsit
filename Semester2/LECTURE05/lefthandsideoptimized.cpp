#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements:";
    for (int i=0;i<size;i++)
        cin>>arr[i];
    int max=arr[size-1];
    arr[size-1]=-1;
    for (int i=size-2;i>=0;i--){
        int temp=arr[i];
        arr[i]=max;
        if(temp>max)
            max=temp;
    }
    for (int i=0;i<size;i++)
        cout<<" "<<arr[i];
}