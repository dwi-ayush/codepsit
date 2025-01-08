//write a program in c++
// using class and object
// to store price list of N items
// and the print the largest price as well as 
// the sum of all prices in c++
#include <iostream>
#include <limits>
using namespace std;
class item{
    int price;
    public:
        int getPrice(){
            return price;
        }
        void setPrice(int x){
            price=x;
        }
};
int main(){
    cout<<"Enter number of items:";
    int n;
    cin>>n;
    item arr[n];
    int max=0;
    for (int i=0;i<n;i++){
        cout<<"Enter the price of "<<i+1<<" item:";
        int x;
        cin>>x;
        if (x>max)
        max=x;
        arr[i].setPrice(x);
    }
    for (int i=0;i<n;i++){
        cout<<"the price of item "<<i+1<<" is :"<<arr[i].getPrice()<<endl;
    }
    cout<<"and the max price is :"<<max;
    return 0;
}
// wapicpp
// to reverse a number
// using stack