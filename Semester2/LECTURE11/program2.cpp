
#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length and breadth:";
    cin>>l>>b;
    for (int i=0;i<l;i++)
        cout<<"*";
    cout<<endl;
    for (int i=1;i<=b-2;i++){
        cout<<"*";
        for (int j=1;j<l-1;j++)
            cout<<" ";
        cout<<"*";
        cout<<endl;
    }
    for (int i=0;i<l;i++)
        cout<<"*";
}
/*
Output:
Enter length and breadth:6 8
******
*    *
*    *
*    *
*    *
*    *
*    *
******
*/