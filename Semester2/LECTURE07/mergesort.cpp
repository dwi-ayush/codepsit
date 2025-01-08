#include "mergeSort.h"
#include "merge.h"

namespace MergeSort {
    void mergeSort(int arr[], int s, int e) {
        if (e - s <= 0)
            return;
        int m = (s + e) / 2;
        MergeSort::mergeSort(arr, s, m);
        MergeSort::mergeSort(arr, m + 1, e);
        Merge::merge(arr, s, m, e);
    }
}
