//wapicpp to find a missing from the first 10 natural numbers
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter natural numbers:";
    int num;
    int sum=0;
    for (int i=1;i<=9;i++){
        cin>>num;
        sum+=num;
    }
    cout<<"missing natural number is " << 55-sum <<endl;
}