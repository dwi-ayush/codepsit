#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int key;
    int data;
    struct node * next;
}node;

typedef node * NODE;

NODE createLL(int size){
    struct node * head = NULL;
    struct node * current = NULL;
    if (size>0){
        for (int i=1;i<=size;i++){
            struct node * newnode = (struct node *)malloc(sizeof(struct node));
            newnode->next=NULL;
            newnode->key=i;
            newnode->data=i;
            // printf("Enter the value for node[%d]:",i);
            // scanf("%d",&newnode->data);

            if (head == NULL){
                head = newnode;
                current = head;
            }
            else{
                current->next=newnode;
                current=current->next;
            }
        }
    }
    else{
        return NULL;
    }
    return head;
}
void promptFillLL(NODE head){
    NODE current=head;
    while(current!=NULL){
        printf("Enter the data for node[%d]:",current->key);
        scanf("%d",&current->data);
        current=current->next;
    }
}
void printLLpernode(NODE head){
    NODE current=head;
    while(current!=NULL){
        printf("the data for node[%d]:%d\n",current->key,current->data);
        current=current->next;
    }
}
void printLLpernodeaddr(NODE head){
    NODE current=head;
    while(current!=NULL){
        printf(" at address %p the node[%d] has data:%d and it points to %p \n",current,current->key,current->data,current->next);
        current=current->next;
    }
}
void rekey(NODE Nd){
    NODE current=Nd;
    int counter=1;
    while(current!=NULL){
        current->key=counter;
        counter++;
        current=current->next;
    }
}
void purgeNode(NODE* headptr,int key){
    NODE localhead= *headptr;
    NODE current=localhead;
    NODE purge=NULL;
    if (localhead->key==key){
        purge = localhead;
        localhead = localhead->next;
        free(purge);
        *headptr = localhead;
        rekey(*headptr);
        return;
    }
    while(current!=NULL){
        if (current->next->key==key){
            purge = current->next;
            break;
        }
        current=current->next;
    }
    current->next=current->next->next;
    *headptr = localhead;
    rekey(*headptr);
    free(purge);
}
NODE createNode(int da){
    NODE newnode = (NODE)malloc(sizeof(node));
    newnode->data=da;
    newnode->next=NULL;
    return newnode;
}
// void insertNode(NODE* head, NODE n, int key){
//     NODE localhead= *head;
//     NODE current = localhead;
//     NODE temp = NULL;
//     if(localhead->key == key){
//         n->next=localhead;
//         n->key=localhead->key;
//         *head=n;
//         rekey(*head);
//         return;
//     }
//     int counter=1;
//     while(current!=NULL && counter<=key){
//         if(current->next->key == key){
//             temp = current->next;
//             current->next = n;
//             n->next=temp;
//             n->key=temp->key;
//             break;
//         }
//         printf("stuck here ! \n");
//         counter++;
//         current=current->next;
//     }
//     printf("\ncounter:%d\n",counter);
//     rekey(*head);
// }
// void promptNodeInsert(NODE * h){
//     printf("Enter the data for node to insert:");
//     int da;
//     scanf("%d",&da);
//     NODE newnode=createNode(da);
//     printf("Enter the position at which to insert:");
//     int k;
//     scanf("%d",&k);
//     insertNode(h,newnode,k);
// }
NODE promptcreateLL(){
    printf("Enter the size of linked list you want to create:");
    int s;
    scanf("%d",&s);
    return createLL(s);
}
void printLL(NODE lh){
    NODE current = lh;
    printf("Linked list is: ");
    while(current!=NULL){
        printf("%d",current->data);
        if (!(current->next==NULL)){
            printf(" --> ");
        }
        current=current->next;
    }
    printf("\n");
}
int main(){
    NODE head = promptcreateLL();
    // promptFillLL(head);
    // printLLpernode(head);
    // printLLpernodeaddr(head);
    printLL(head);
    // printLLpernodeaddr(head);
    return 0;
}