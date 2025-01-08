
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter width of one triangle:";
    cin>>n;
    // upper inverted triangle
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<" * ";
        }
        for (int j=(n-i-1)*2-1;j>=0;j--){
            cout<<"   ";
        }
        for (int j=0;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=0;j<=i;j++){
            cout<<" * ";
        }
        for (int j=(n-i-1)*2-1;j>=0;j--){
            cout<<"   ";
        }
        for (int j=0;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
/*
Output:
Enter width of one triangle:5
 *                          *
 *  *                    *  *
 *  *  *              *  *  *
 *  *  *  *        *  *  *  * 
 *  *  *  *  *  *  *  *  *  *
 *  *  *  *        *  *  *  *
 *  *  *              *  *  *
 *  *                    *  * 
 *                          *
 
 */