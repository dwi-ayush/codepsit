//write a program in c to implement 
// and create, display a circular linked list

//write a prorgram for insertion of node 
//at the beginning of the linked list

//write a program in C to insert a node at the end 
// of a circular linked


// write a program in C to delete
// first node in a circular linked

// write a program in C to delete
// last node in a circular linked list

#include <iostream>
using namespace std;
using namespace std;

typedef struct Node{
    int val;
    struct Node * next;
}node;
typedef node * NODE;

NODE make_a_circular_linked_list();
void display(NODE);

int main(){
    NODE head = make_a_circular_linked_list();
    display(head);
    return 0;
}
void display(NODE head){
    NODE cur = head;
    cout<<"Circular Linked List is : ";
    cout<<cur->val<<" ";
    cur=cur->next;
    while(cur!=head ){
        cout<<cur->val<<" ";
        cur = cur->next;
    }
}
NODE insert_a_node_at_the_beginning_of_the_circular_linked_list_prompt(NODE head){
    NODE cur = head;
    NODE newhead = new node;
    cout<<"Enter the value of beginning element:";
    cin>>newhead->val;
    return newhead;
}
NODE make_a_circular_linked_list(){
    NODE head = NULL, cur = NULL;
    int val;
    cout<<"Enter value to insert in Linked list (-1 to end):";
    cin>>val;
    if (val==-1){
        return NULL;
    }
    else{
        head = new node;
        head->val=val;
        head->next = NULL;
        cur = head;
    }
    while(true){
        cout<<"Enter value to insert in Linked list (-1 to end):";
        cin>>val;
        if (val==-1){
            break;
        }
        else{
            cur->next = new node;
            cur->next->val = val;
            cur=cur->next;
            cur->next = NULL;
        }
    }
    cur->next = head;
    return head;
}