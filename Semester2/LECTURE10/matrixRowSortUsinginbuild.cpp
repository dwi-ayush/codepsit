// WAPICPP to print a matrix and then sort rows in ascending and descending order alternatively
//optimised

// running time 

#include <iostream>
#include <algorithm>
// the code iterates over each row of the matrix
// and sort it using sort function, which is
// defined in algorithm
// the time complexity of sorting a row of length n
// using the sort function is 
// O(nlogn)
// overall iteration, the code iterates over each row of the matrix
// once since there are N rows
// the overall iteration complexity is O(n)
// printing of matrix is O(n^2)
// the dominant factor in the time complexity
// the sorting of each row 
// which is order of nlogn per row, and there are N rows
// so the overall complexity will be O(n^2logN) and this is the 
// greatest value in the whole algorithm
// space complexity is O(1)

using namespace std;
int main()
{
    int alternator=1;
    int r,c;
    cout<<"Enter rows: ";
    cin>>r;
    cout<<"Enter columns: ";
    cin>>c;
    int mat[r][c];
    cout<<"Enter Matrix Elements:";
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    for (int i=0;i<r;i++){
        if (alternator){
            sort(mat[i],mat[i]+c);
        }
        else{
            sort(mat[i],mat[i]+c,greater<int>());
        }
        alternator=!alternator;
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/* 
Output: 
Enter rows: 3 
Enter columns: 3
Enter Matrix Elements:
3 1 2
2 1 3
6 4 9
Sorted Array:
1 2 3 
3 2 1 
6 4 9
*/