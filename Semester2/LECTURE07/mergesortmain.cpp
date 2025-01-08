#include <iostream>
#include "mergeSort.h"

using namespace MergeSort;
using namespace std;

int main() {
    int arr[] = {5, 3, 6, 7, 8, 2, 4, 1, 11, 15, -10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Given array is:";
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
    
    mergeSort(arr, 0, size - 1);
    
    cout << "Sorted array is:";
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
    
    return 0;
}
