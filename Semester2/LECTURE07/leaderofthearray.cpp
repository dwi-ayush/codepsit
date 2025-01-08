#include "leaderofthearray.h"
#include <iostream>
using namespace std;
namespace LeaderOfTheArray {
    void findLeader(int arr[], int size) {
        int *sk = new int[size];
        int top = -1;
        sk[++top] = arr[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            if (arr[i] >= sk[top]) {
                sk[++top] = arr[i];
            }
        }
        cout << "Top array: ";
        while (top != -1) {
            cout << sk[top] << " ";
            top--;
        }
    }
}
