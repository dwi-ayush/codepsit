#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> number;
    string num;
    cin>>num;
    short ind = 0;
    while(ind<num.length()){
        number.push(num[ind++]-48);
    }
    while(number.size()!=0){
        cout<<number.top();
        number.pop();
    }
    return 0;
}