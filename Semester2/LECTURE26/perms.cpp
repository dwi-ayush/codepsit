#include <iostream>
#include <vector>
using namespace std;
void findPerms(vector<int>&,vector<vector<int>>&, vector<int>&, vector<int>&);
int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> answer;
    vector<int> map;
    vector<int> current;
    for(const auto& it: arr)
        map.push_back(0);
    findPerms(arr,answer,current,map);
    for (const auto& perm: answer){
        for (const auto& ele: perm)
            cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
}   
void findPerms(vector<int>& arr, vector<vector<int>>& answer, vector<int>& currentPermutation, vector<int>& map) {
    if (currentPermutation.size() == arr.size()) {
        answer.push_back(currentPermutation);
        return;
    }
    for (int i = 0; i < arr.size(); i++) {
        if (map[i] == 0) {  
            map[i] = 1;  
            currentPermutation.push_back(arr[i]);  
            findPerms(arr, answer, currentPermutation, map);  
            map[i] = 0;  
            currentPermutation.pop_back();  
        }
    }
}
