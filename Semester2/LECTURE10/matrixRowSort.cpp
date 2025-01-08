// WAPICPP to print a matrix and then sort rows in ascending and descending order alternatively
// complexity is O(n^3)

// time 

#include <iostream>
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
            for (int j=0;j<c-1;j++){
                for (int k=0;k<c-1-i;k++){
                    if (mat[i][k]>mat[i][k+1]){
                        int temp=mat[i][k];
                        mat[i][k]=mat[i][k+1];
                        mat[i][k+1]=temp;
                    }
                }
            }
        }
        else{
            for (int j=0;j<c-1;j++){
                for (int k=0;k<c-1-j;k++){
                    if (mat[i][k]<mat[i][k+1]){
                        int temp=mat[i][k];
                        mat[i][k]=mat[i][k+1];
                        mat[i][k+1]=temp;
                    }
                }
            }
        }
        alternator=!alternator;
    }
    cout<<"Sorted Array:"<<endl;
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