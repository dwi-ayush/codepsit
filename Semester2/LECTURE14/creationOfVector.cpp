//std::vector < T> vector_name;
// The type parameter < T> specifies the type of the vector.
// It can be any primitive data type such as int, char, float, etc.
// For example, vector <int> num;
// creation of vector
#include <iostream>
#include <vector>
using namespace std;
int main(){
    // initializer list 
    vector<int> M = {11,12,13,14,15};
    //uniform initialization
    vector<int> N {6,7,8,9,10};
    // method 3
    vector<int> O (5,12);
    cout << "vector1 = ";
    // ranged loop
    for (const int & i : M){
        cout << i << "  " ;
    }
    cout << "\nvector2 = ";
    // ranged loop
    for (const int & i : N){
        cout << i << " ";
    }
    for (const int & i : O){
        cout << i << " ";
    }
}