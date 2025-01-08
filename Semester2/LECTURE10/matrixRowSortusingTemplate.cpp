#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename ArmaanDtype>
void SortAlternatorFunc(int r, int c, vector<vector<ArmaanDtype>>& mat) {
    int alternator = 1;
    for (int i = 0; i < r; i++) {
        if (alternator) {
            sort(mat[i].begin(), mat[i].end());
        } else {
            sort(mat[i].begin(), mat[i].end(), greater<ArmaanDtype>());
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
    
    vector<vector<int>> mat(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    
    SortAlternatorFunc(r, c, mat);
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
3 2 1
1 2 3
3 2 1
1 2 3 
3 2 1
1 2 3
*/