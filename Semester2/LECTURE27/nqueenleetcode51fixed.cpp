// fixed code by chat GPT
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class Solution {
    vector<vector<string>> solutions;
    vector<vector<int>> board;
    vector<pair<int,int>> queenPos;

    void printBoard(){
        for (const auto& row : board){
            for (const auto & ele : row ){
                cout << "\t"<<ele;
            }
            cout << endl;
        }
        cout<<endl;
    }

    void placeQueen(pair<int, int> pos, int n) {
        int row = pos.first;
        int col = pos.second;
        for (int i = 0; i < n; i++) {
            board[row][i] += 1;
            board[i][col] += 1;
            if (row + i < n && col + i < n) board[row + i][col + i] += 1;
            if (row - i >= 0 && col - i >= 0) board[row - i][col - i] += 1;
            if (row + i < n && col - i >= 0) board[row + i][col - i] += 1;
            if (row - i >= 0 && col + i < n) board[row - i][col + i] += 1;
        }
        board[row][col] = -1;
    }

    void removeQueen(pair<int, int> pos, int n) {
        int row = pos.first;
        int col = pos.second;
        for (int i = 0; i < n; i++) {
            board[row][i] -= 1;
            board[i][col] -= 1;
            if (row + i < n && col + i < n) board[row + i][col + i] -= 1;
            if (row - i >= 0 && col - i >= 0) board[row - i][col - i] -= 1;
            if (row + i < n && col - i >= 0) board[row + i][col - i] -= 1;
            if (row - i >= 0 && col + i < n) board[row - i][col + i] -= 1;
        }
        board[row][col] = 0;
    }

    void initBoard(int n) {
        board = vector<vector<int>>(n, vector<int>(n, 0));
    }

    void parseSolution(int n) {
        vector<string> onesol(n, string(n, '.'));
        for (const auto& pos : queenPos) {
            onesol[pos.first][pos.second] = 'Q';
        }
        solutions.push_back(onesol);
    }

    void solver(int n, int row) {
        if (row == n) {
            parseSolution(n);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (board[row][col] == 0) {
                queenPos.push_back({row, col});

                
                placeQueen({row, col}, n);
                // printBoard();
                solver(n, row + 1);
                removeQueen({row, col}, n);
                queenPos.pop_back();
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        solutions.clear();
        initBoard(n);
        solver(n, 0);
        return solutions;
    }
};

int main() {
    int n = 5;
    Solution obj;
    vector<vector<string>> solution = obj.solveNQueens(n);
    int counter = 1;
    for (const auto& it : solution){
        cout << "Solution " << counter++ << ":\n";
        for (const auto& st : it){
            cout << st << endl;
        }
        cout << endl;
    }
    return 0;
}
