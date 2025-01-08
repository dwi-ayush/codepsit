#include <iostream>
using namespace std;


typedef struct node{
    int value;
    struct node * left;
    struct node * right;
}NODE;


NODE * newNode(int val){
    NODE * temp = new NODE;
    temp->value=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
typedef NODE * nptr;

void traverseAndPrint(nptr root){
    if (root==NULL){
        return ;
    }
    traverseAndPrint(root->left);
    traverseAndPrint(root->right);
    cout<<root->value<<endl;
    

}
int main(){
    nptr root;
    root = newNode(5);
    root->left=newNode(4);
    root->right=newNode(7);
    root->left->left=newNode(2);
    root->left->right=newNode(5);
    root->right->left=newNode(3);
    root->right->right=newNode(18);

    // cout<<root->value<<endl;
    // cout<<root->left->value<<endl;
    // cout<<root->right->value<<endl;
    // cout<<root->left->left->value<<endl;
    // cout<<root->left->right->value<<endl;
    // cout<<root->right->left->value<<endl;
    // cout<<root->right->right->value<<endl;

    // I made a Traverse FUNCTION! YAY!!!!
    traverseAndPrint(root);
    return 0;
}
