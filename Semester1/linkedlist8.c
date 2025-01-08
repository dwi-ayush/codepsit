#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node*next;
};
int main(){
    struct node * head = NULL;
    struct node * node1ptr = NULL;
    struct node * node2ptr = NULL;
    struct node * node3ptr = NULL;
    struct node * node4ptr = NULL;
    struct node * node5ptr = NULL;
    
    node1ptr=(struct node *)malloc(sizeof(struct node));
    node2ptr=(struct node *)malloc(sizeof(struct node));
    node3ptr=(struct node *)malloc(sizeof(struct node));
    node4ptr=(struct node *)malloc(sizeof(struct node));
    node5ptr=(struct node *)malloc(sizeof(struct node));

    node1ptr->data=1;
    node2ptr->data=2;
    node3ptr->data=3;
    node4ptr->data=4;
    node5ptr->data=5;

    node1ptr->next=node2ptr;
    node2ptr->next=node3ptr;
    node3ptr->next=node4ptr;
    node4ptr->next=node5ptr;
    node5ptr->next=NULL;

    head=node1ptr;
    struct node*curr=head;
    while(curr!=NULL){
            printf("%d ",curr->data);

        curr=curr->next;
    }

    


}