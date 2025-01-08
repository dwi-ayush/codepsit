//wapicpp that returns the element in a vector
//that are strictly smaller than their adjacent left and right neighbours

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec1 = {2,1,3,4,6,0,6};
    for (int i=1;i<vec1.size()-1;i++){
        if (vec1[i]<vec1[i+1] && vec1[i]<vec1[i-1]){
            cout<<vec1[i]<<" ";
        }
    }
}