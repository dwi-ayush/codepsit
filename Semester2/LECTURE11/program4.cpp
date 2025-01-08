
#include <iostream>
#include <vector>

using namespace std;

template<typename d>
void rotate(vector<d>& vect, int r){
    int counter = 0;
    while(r!=0){
        // cout<<"here"<<++counter;
        d temp = vect[vect.size()-1];
        for (int i=vect.size()-2;i>=0;i--){
            vect[i+1]=vect[i];
        }
        vect[0]=temp;
        r--;
    }
}
int main(){
    cout<<"Enter size:";
    int n;
    cin>>n;
    vector<int> vect;
    cout<<"Enter values:";
    for (int i=0; i<n;i++){
        int temp;
        cin>>temp;
        vect.push_back(temp);
    }
    cout<<"Enter rotate time:";
    int r;
    cin>>r;
    rotate(vect,r);
    for (int i=0;i<vect.size();i++){
        cout<<vect.at(i)<<" ";
    }
    return 0;
}
/*
Output:
Enter size:5
Enter values:1 2 3 4 5
Enter rotate time:3
3 4 5 1 2
*/