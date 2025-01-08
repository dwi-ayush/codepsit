// TL;DR : this code fails when n>4 because backtracking isn't
// implemented by me, the fixed version by chatGPT is in next file
// this attempt took more than 6 hours and I think I should have spent more time on the notebook before trying to implement it

#include <iostream>
#include <vector>
// #include <utility>
using namespace std;
class Solution {
    vector<vector<string>> solutions;
    vector<vector<int>> board;
    vector<pair<int,int>> queenPos;
    void printBoard(){
        for (const auto& row : board){
            for (const auto & ele : row ){
                cout<<ele;
            }
            cout<<endl;
        }
    }
    void placeQueen(pair<int,int> pos,int n){
        for (int i=0;i<n;i++){
            board[i][pos.second] = 1;
        }
        for (int j=0;j<n;j++){
            board[pos.first][j] = 1;
        }
        int i=pos.first,j=pos.second;
        while(i>=0 && i<=n-1 && j>=0 && j<=n-1){
            board[i++][j++] = 1;
        }
        i=pos.first;
        j=pos.second;
        while(i>=0 && i<=n-1 && j>=0 && j<=n-1){
            board[i--][j--] = 1;
        }
        i=pos.first;
        j=pos.second;
        while(i>=0 && i<=n-1 && j>=0 && j<=n-1){
            board[i++][j--] = 1;
        }
        i=pos.first;
        j=pos.second;
        while(i>=0 && i<=n-1 && j>=0 && j<=n-1){
            board[i--][j++] = 1;
        }

    }
    void initBoard(int n){
        for (auto& it : board){
            it.clear();
        }
        board.clear();
        for (int i=0;i<n;i++){
            vector<int> row;
            for (int j=0;j<n;j++){
                row.push_back(0);
            }
            board.push_back(row);
        }
    }
    private:
        void parseSolution(int n){
            vector<string> onesol;
            string temp = "";
            for (int i=0;i<n;i++){
                temp+='.';
            }
            for (int i=0;i<n;i++){
                onesol.push_back(temp);
            }
            for (int i=0;i<queenPos.size();i++){
                onesol[queenPos[i].first][queenPos[i].second] = 'Q';
            }
            queenPos.clear();
            
            solutions.push_back(onesol);
        }
        pair<int,int> geTNextPos(pair<int,int> curpos,int n){

            curpos.second++;
            if (curpos.second == n){
                curpos.second = 0;
                curpos.first++;
            }
            if (curpos.first == n){
                return make_pair(-1,-1);
            }
            while(board[curpos.first][curpos.second] != 0){
                curpos.second++;
                if (curpos.second == n){
                    curpos.second = 0;
                    curpos.first++;
                }
                if (curpos.first == n){
                    return make_pair(-1,-1);
                }
            }
            return curpos;
        }
        void solver(int n,int nq,pair<int,int> curPos){
            if (n>nq){
                pair<int,int> np = geTNextPos(curPos,n);
                if (np.first == -1 && np.second == -1 ){
                    return;
                }
                queenPos.push_back(np);
                vector<vector<int>> tempboardstate = board;
                placeQueen(np,n);
                solver(n, ++nq, np);
                board = tempboardstate;
            }
            else{
                parseSolution(n);
                return ;
            }
        }
        pair<int,int> numToPos(int i,int n){
            return make_pair((i)/n,(i)%n);
        }
public:
    vector<vector<string>> solveNQueens(int n){
        for (int i=0;i<n*n;i++){
            pair<int,int> curPair = numToPos(i,n);
            queenPos.clear();
            // board.clear();
            initBoard(n);
            queenPos.push_back(curPair);
            placeQueen(curPair,n);
            solver(n,1,curPair);
        }
            
        // cout<<geTNextPos(make_pair(1,2),n).first<<geTNextPos(make_pair(1,2),n).second;
        return solutions;
    }
};

int main(){
    int n=4;
    Solution obj;
    vector<vector<string>> solution = obj.solveNQueens(n);
    int counter = 1;
    for (const auto& it : solution){
        cout<<"solution "<<counter++<<":\n";
        for (const auto& st : it){
            cout<< st <<endl;
        }
        cout<<endl;
    }
    return 0;
}
