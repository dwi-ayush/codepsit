#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};
typedef struct node * nodeptr;
nodeptr createnode(){
    nodeptr newnode = (nodeptr)malloc(sizeof(struct node));
    newnode->data=0;
    return newnode;
}
nodeptr createlinkedlist(int size){
    nodeptr localhead=NULL;
    if (size>0){
        localhead=createnode();
        nodeptr current=localhead;
        printf("Enter value for node 1:");
        int da;
        scanf("%d",&da);
        current->data=da;
        for (int i=2;i<=size;i++){
            current->next=createnode();
            current=current->next;
            printf("Enter value for node %d:",i);
            scanf("%d",&da);
            current->data=da;
        }
        current->next=NULL;
    }
    return localhead;
}
void printlinkedlist(nodeptr localhead){
    nodeptr current=localhead;
    printf("The linked list is : ");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
}
int insertnode(nodeptr * headptr, int position, nodeptr n){
    if (position==1){
        n->next=*headptr;
        *headptr=n;
    }
    else if(position>1){
        int counter=1;
        
    }
}
int main(){
    nodeptr head = createlinkedlist(6);
    insertnode(&head,1,createnode());
    printlinkedlist(head);
}