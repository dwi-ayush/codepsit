//WAPIC to remove duplicate elements in a linked list
// from a already sorted linked list
// 
// cyclic linked list detection using 
//
// length of loop in cyclic linked list
#define totalnodes 12
#include <iostream>
using namespace std;
struct NODE {
    int val;
    struct NODE * next;
};
typedef NODE * node;

void display(node head){
    node cur = head;
    cout<<"\nLinked List:";
    while(cur!=NULL){
        cout<<" "<<cur->val;
        cur=cur->next;
    }
    cout<<endl;
}
int main(){
    node nodearr[totalnodes];
    for (int i=0;i<totalnodes;i++){
        nodearr[i]=NULL;
    }
    for (int i=0;i<totalnodes;i++){
        nodearr[i] = new NODE;
        nodearr[i]->val = i+1;
    }
    for (int i=0;i<totalnodes-1;i++){
        nodearr[i]->next = nodearr[i+1];
    }
    nodearr[totalnodes-1]->next = nodearr[5];
    // display(nodearr[0]);
    node slowptr = nodearr[0];
    node fastptr = nodearr[0];
    int flag=0;
    int len;
    while(slowptr && fastptr){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if (slowptr == fastptr){
            flag=1;
            cout<<"\nTHERE IS A LOOP\n";
            len=1;
            while(slowptr && fastptr){
                slowptr = slowptr->next;
                fastptr = fastptr->next->next;
                len++;
                if (slowptr==fastptr)
                    break;
            }
            cout<<"Loop length: "<<len<<endl;
            break;
        }
    }
    if (!flag){
        cout<<"\nTHERE IS NO LOOP\n";
    }
    return 0;
}