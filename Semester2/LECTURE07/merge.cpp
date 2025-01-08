#include "merge.h"

namespace Merge {
    void merge(int arr[], int s, int m, int e) {
        int size1 = m - s + 1;
        int size2 = e - m;
        int arrLeft[size1];
        int arrRight[size2];
        for (int i = 0; i < size1; i++)
            arrLeft[i] = arr[s + i];
        for (int i = 0; i < size2; i++)
            arrRight[i] = arr[m + 1 + i];
        int i, j, k;
        i = 0;
        j = 0;
        k = s;
        while (i < size1 && j < size2) {
            if (arrLeft[i] > arrRight[j]) {
                arr[k++] = arrRight[j++];
            } else {
                arr[k++] = arrLeft[i++];
            }
        }
        while (i < size1) {
            arr[k++] = arrLeft[i++];
        }
        while (j < size2) {
            arr[k++] = arrRight[j++];
        }
    }
}
