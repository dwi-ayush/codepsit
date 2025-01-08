#include <iostream>
using namespace std;

template<typename armType>
void alternateSort(int r, int c, armType **mat) {
    int alternator = 1;
    for (int i = 0; i < r; i++) {
        if (alternator) {
            for (int j = 0; j < c - 1; j++) {
                for (int k = 0; k < c - 1 - j; k++) {
                    if (mat[i][k] > mat[i][k + 1]) {
                        armType temp = mat[i][k];
                        mat[i][k] = mat[i][k + 1];
                        mat[i][k + 1] = temp;
                    }
                }
            }
        } else {
            for (int j = 0; j < c - 1; j++) {
                for (int k = 0; k < c - 1 - j; k++) {
                    if (mat[i][k] < mat[i][k + 1]) {
                        armType temp = mat[i][k];
                        mat[i][k] = mat[i][k + 1];
                        mat[i][k + 1] = temp;
                    }
                }
            }
        }
        alternator = !alternator;
    }
}

int main() {
    int r, c;
    cout << "Enter rows: ";
    cin >> r;
    cout << "Enter columns: ";
    cin >> c;

    int **mat = new int *[r];
    for (int i = 0; i < r; i++) {
        mat[i] = new int[c];
    }

    cout << "Enter Matrix Elements:";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    alternateSort(r, c, mat);

    cout << "Sorted Matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Output:
Enter rows: 3
Enter columns: 3
Enter Matrix Elements:3 2 1
1 2 3
3 2 1
Sorted Matrix:
1 2 3
3 2 1
1 2 3
*/