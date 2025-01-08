// write a program in cPP to find all subsequences of an array
// write a program in cPP to find all subsequences that sum up to a particular value

//Subset sum - I 

#include <iostream>
#include <vector>
using namespace std;
void findSubsequence(vector<int>& arr,int ind,vector<int> & current,int N){
    if (ind == N){
        if (!current.size()){
            cout<<"{}"<<endl;
        }
        for (const auto & it : current){
            cout<<it<<" ";
        }
        cout<<endl;

        return;
    }
    else{
        current.push_back(arr[ind]);
        findSubsequence(arr,ind+1,current,N);
        current.pop_back();
        findSubsequence(arr,ind+1,current,N);
    }
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> current = {};
    int n= arr.size();
    findSubsequence(arr,0,current,n);
    return 0;
}