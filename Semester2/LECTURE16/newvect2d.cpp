#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int rows = 3;
    int cols = 3;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout<< "Enter the values for the matrix:"<<endl;
    for (int i=0; i<rows ; ++i){
        for (int j = 0; j<cols; ++j){
            cout<<"Enter value for matrix [" << i <<"]["<<j<<"]:";
            cin>>matrix[i][j];
        }
    }
    //output 
     cout<<"input matrix is : "<<endl;

    for (int i=0; i<rows ; ++i){
        for (int j = 0; j<cols; ++j){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    // transpose
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (i<j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    

    // reverse row
    for (int i=0;i<rows;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
     //output 
     cout<<"output matrix is : "<<endl;
    for (int i=0; i<rows ; ++i){
        for (int j = 0; j<cols; ++j){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}