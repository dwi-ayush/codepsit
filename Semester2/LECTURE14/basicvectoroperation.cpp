#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector < int > num {100,200,300,400,500};
    cout << "Initial Vector: ";
    for (const int & i : num){
        cout << i << "  ";
    }
    // add the integers 6 and 7 to the vector
    num.push_back(600);
    num.push_back(700);
    cout<< "\nUpdated Vector: ";
    for (const int & i : num){
        cout<<i<<" ";
    }
    cout << endl << "$ IMPORTANT FUNCTION PRESENT IN VECTOR"<<endl;
    cout << "Size: "<<num.size()<<endl;
    cout<< "Capacity : "<<num.capacity()<<endl;
    cout<<"First element:"<<num.front()<<endl;
    cout<<"Last element:"<<num.back()<<endl;
    num.resize(10);
    cout << "After resize to 3, size is : " << num.size() << endl;
    cout << "Last element:" << num.back() << endl;
    // Insert at beginning
}