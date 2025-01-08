// p1 write a program in cpp to print hour glass
// p2 write a program in cpp to print hollow rectangle
// p3 write a program in cpp to print pascle's triangle
// p4 write a program in cpp to print rotation of an array
// by K times using function templete 
// p5 write a program in cpp to print a pattern that looks like
// a butterfly

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows for upper inverted triangle:";
    cin>>n;
    // upper inverted triangle
    for (int i=0;i<n;i++){
        
        cout<<endl;
        for (int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int j=1;j<=(n-i)*2 - 1 ;j++){
            cout<<"*";
        }
    }
    cout<<endl;
    // lower triangle
    for (int i=2;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
Output:
Enter number of rows for upper inverted triangle:5

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*/