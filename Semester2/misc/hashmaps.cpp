#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    mp.insert(make_pair("one",1));
    mp.insert(make_pair("two",2));
    mp.insert(make_pair("three",3));
    mp.insert(make_pair("four",4));
    mp.insert(make_pair("five",5));

    string search;
    cin>>search;
    cout<<mp.at(search);
    return 0;
}