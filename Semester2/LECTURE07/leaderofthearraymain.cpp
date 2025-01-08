#include <iostream>
#include "leaderofthearray.h"

using namespace LeaderOfTheArray;
using namespace std;

int main() {
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    
    int *arr = new int[size];
    
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    findLeader(arr, size);
    
    delete[] arr;
    return 0;
}
