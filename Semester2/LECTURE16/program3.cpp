//wapicpp to find the median of a matrix
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {16, 7, 32},
        {74, 43, 24}
    };

    vector<int> flat;
    for (const auto& row : matrix) {
        flat.insert(flat.end(), row.begin(), row.end());
    }

    sort(flat.begin(), flat.end());

    double median;
    int n = flat.size();
    if (n % 2 == 0) {
        median = (flat[n / 2 - 1] + flat[n / 2]) / 2.0;
    } else {
        median = flat[n / 2];
    }

    cout << "The median is: " << median << endl;

    return 0;
}


// another ques
// wap to rotate a matrix using vectors