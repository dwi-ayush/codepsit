#include <iostream>


using namespace std;
typedef struct Node{
    struct Node * prev;
    int val;
    struct Node * next;
}node;
typedef node * NODE;


// 1.)insertion at the beginning
//
// 2.)insertion at the end
// traverse to the last node 
// ptr is the last node, where next is null
// struct node * newnode = (struct node *)malloc(sizeof(struct node))
// ptr->next = newnode
// newnode->prev = ptr
// newnode->next = NULL


// 3.) Insertion after a particular location
// for a given key = by user
// find the ptr which holds the key value
// traverse till val = key for ptr
// struct node * newnode = (struct node *)malloc(sizeof(struct node))
// get newnode val from user
// struct node * temp = ptr->next
// ptr->next = newnode
// newnode->next = temp
// temp->prev = newnode
// newnode->prev = ptr;
NODE init_a_doubly_linked_list_of_elements(int noe,int userPromptFlag){
    NODE head = NULL;
    if (noe>0){
        head = new Node;
        head->prev=NULL;
        head->next=NULL;
        if (!userPromptFlag){
            head->val = 1;
        }
        else{
            cout<<"Enter the value for Node:";
            cin>>head->val;
        }
        NODE ptr = head;
        for (int i=1;i<noe;i++){
            NODE newnode = new Node;
            if(!userPromptFlag)
            newnode->val = i+1;
            else
            {
                cout<<"Enter the value for Node:";
                cin>>newnode->val;
            }
            ptr->next = newnode;
            newnode->prev = ptr;
            newnode->next = NULL;
            ptr=ptr->next;
        }
    }
    return head;
}
NODE getEndNode(NODE head){
    NODE ptr = head;
    while(ptr->next){
        ptr=ptr->next;
    }
    return ptr;
}
void display(NODE head,int revFlag,int debugFlag){
    NODE cur = head;
    if (revFlag){
        cur = getEndNode(head);
        cout<<"Reversed ";
    }
    cout<<"Doubly Linked List:\n";
    while(cur!=NULL){
        if (debugFlag)
            cout<<"current value: ";
        cout<<cur->val<<" ";
        if (debugFlag){
            cout<<"current address:";
            cout<<cur<<" ";
            cout<<"previous address:";
            cout<<cur->prev<<" ";
            cout<<"next address:";
            cout<<cur->next<<endl;
        }
        if(revFlag)
            cur=cur->prev;
        else
            cur=cur->next;
    }
    cout<<endl;
}
void insert_after_a_particular_node(NODE head){
    cout<<"Enter a key to insert after:";
    int key;
    cin>>key;

    cout<<"Enter the value to insert after the key node:";
    int value;
    cin>>value;
    NODE cur = head;
    while(cur->val!=key)
        cur=cur->next;
    NODE newnode = new Node;
    newnode->prev = cur;
    newnode->next = cur->next;
    cur->next->prev=newnode;
    cur->next = newnode;
    newnode->val=value;
}
NODE insert_at_beginning_prompt(NODE head){
    NODE newnode = new Node;
    newnode->next = head;
    head->prev = newnode;
    newnode->prev=NULL;
    newnode->next = head;
    cout<<"Enter value for node to be inserted in the beginning:";
    cin>>newnode->val;
    return newnode;
}
NODE insert_at_end_prompt(NODE head){
    NODE newnode = new Node;
    cout<<"Enter value for node to be inserted in the end:";
    cin>>newnode->val;
    NODE lastnode = getEndNode(head);
    newnode->prev = lastnode;
    lastnode->next = newnode;
    newnode->next = NULL;

    return head;
}
NODE delete_from_beginning(NODE head){
    head = head->next;
    delete head->prev;
    head->prev = NULL;
    return head;
}
NODE delete_from_end(NODE head){
    NODE lastNode = getEndNode(head);
    lastNode = lastNode->prev;
    delete lastNode->next;
    lastNode->next= NULL;
    return head;
}
int main(){
    NODE head = init_a_doubly_linked_list_of_elements(10,0);
    int debug=0;
    display(head,0,debug);
    // display(head,1,debug);
    // display(head,0,debug);
    // cout<<getEndNode(head);
    // head = insert_at_beginning_prompt(head);
    // insert_at_end_prompt(head);
    insert_after_a_particular_node(head);
    display(head,0,debug);
    head = delete_from_beginning(head);
    display(head,0,debug);
    head = delete_from_end(head);
    display(head,0,debug);
    return 0;
}

// 4.) deletion from the beginning of a doubly linked list

// 5.)