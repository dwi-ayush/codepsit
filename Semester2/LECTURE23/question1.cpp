//WAPIC to remove duplicate elements in a linked list
// from a already sorted linked list
// 
// cyclic linked list detection using 
//
// length of loop in cyclic linked list
#include <iostream>
using namespace std;
typedef struct Node{
    int val;
    struct Node * next;
}node;
typedef node * NODE;

NODE createLL();
NODE deleteListItemByIndex(NODE, int);
NODE deleteListItemByIndexPrompt(NODE);
NODE insertNodeAfterNodeIndex(NODE, int, NODE);
NODE insertNodeAfterNodeIndexPrompt(NODE);
NODE makeNode(int);
NODE basicLLinit(int);
NODE freeLL(NODE);
void display(NODE);
void printHelpMenu();

int main(){
    NODE head = NULL;
    head = createLL();
    display(head);
    NODE ptr = head;
    while(ptr->next!=NULL){
        NODE tmp = ptr->next;
        while(tmp->val  == ptr->val){
            NODE tbf = tmp;
            tmp = tmp->next;
            delete (tbf);
        }
        ptr->next = tmp;
        ptr=ptr->next;
    }
    display(head);

    return 0;
}
NODE freeLL(NODE head){
    NODE cur = head;
    while(cur!=NULL){
        NODE temp = cur;
        cur=cur->next;
        delete temp;
    }
    return NULL;
}
void printHelpMenu(){
    cout<<endl;
    cout<<"The following operations are allowed on the current Linked List:"<<endl;
    cout<<"type the character 'b' for creating a basic linked list of 5 elements"<<endl;
    cout<<"type the character 'c' for creating linked list"<<endl;
    cout<<"type the character 'i' for prompt and insert node after a specfic index in linked list:"<<endl;
    cout<<"type the character 'r' for prompt deletion of a node at given index"<<endl;
    cout<<"type the character 'd' for displaying linked list elements"<<endl;
    cout<<"type the character 'f' to free the memory hogged by current linked list:"<<endl;
    cout<<endl;
    cout<<"type the character 'x' to exit"<<endl<<endl;
    cout<<"NOTE: ALL OPERATION SELECTION CHARACTERS MUST BE SMALL LETTERS!"<<endl;
    cout<<endl;
}
NODE basicLLinit(int len){
    NODE head = new node;
    NODE cur = head;
    cur->val=0;
    cur->next=NULL;
    for (int i=1;i<len;i++){
        cur->next = new node;
        cur=cur->next;
        cur->val=i;
        cur->next = NULL;
    }
    return head;
}
NODE insertNodeAfterNodeIndexPrompt(NODE head){
    cout<<"Enter node Index after which to insert:";
    int ind;
    cin>>ind;
    cout<<"Enter value in the inserted node:";
    int val;
    cin>>val;
    return insertNodeAfterNodeIndex(head,ind,makeNode(val));
}
NODE makeNode(int val){
    NODE nd = new node;
    nd->val=val;
    nd->next= NULL;
    return nd;
}
NODE insertNodeAfterNodeIndex(NODE head, int ind, NODE nd){
    if (!head){
        return nd;
    }
    NODE cur = head;
    if (ind<0){
        return head;
    }
    while(ind>0 && cur){
        cur=cur->next;
        ind--;
    }
    if (!cur){
        return head;
    }
    NODE temp = cur->next;
    cur->next = nd;
    nd->next = temp;
    return head;
}
NODE deleteListItemByIndexPrompt(NODE head){
    cout<<"Enter node Index to delete:";
    int ind;
    cin>>ind;
    deleteListItemByIndex(head,ind);
}
NODE createLL(){
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
    return head;
}
NODE deleteListItemByIndex(NODE head, int ind){
    NODE cur = head;
    NODE prevcur = NULL;
    if (ind==0){
        NODE newhead = head->next;
        delete head;
        return newhead;
    }
    while(ind && cur){
        prevcur=cur;
        cur=cur->next;
        ind--;
    }
    prevcur->next = cur->next;
    delete cur;
    return head;
}
void display(NODE head){
    NODE cur = head;
    cout<<"\nLinked List:";
    while(cur!=NULL){
        cout<<" "<<cur->val;
        cur=cur->next;
    }
    cout<<endl;
}