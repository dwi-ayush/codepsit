#include <iostream>
#include <set>
//#include <algorithm>
#include <utility>
using namespace std;
int main(){
    set<int> new_set;
    new_set.insert(5);
    new_set.insert(2);
    new_set.insert(6);
    set<int> new_set2({5,6,7,8,83,3,7,4,4});
    // set<int>::const_iterator sit;
    for (auto sit=new_set2.rbegin();sit!=new_set2.rend();++sit){
        cout<<*sit<<" ";
    }
    set<int,greater<int>> rev_set({5,3,2,235,2,1});
    for (auto it=rev_set.begin();it!=rev_set.end();++it){
    	cout<<*it<<" ";
    }
    cout<<endl;
    cout<<rev_set.size();
    rev_set.clear();
    cout<<endl;
    cout<<rev_set.size();
    cout<<rev_set.empty();
    if (rev_set.empty())
    	cout<<"set is empty"<<endl;
    else
    	cout<<"set is not empty"<<endl;

    return 0;
}
