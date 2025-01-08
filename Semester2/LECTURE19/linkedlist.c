#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node * next;
};
struct node * start = NULL;
struct node * create_ll (struct node *);
struct node * display ( struct node * );
struct node * insert_beg(struct node *);
struct node * insert__end(struct node *);
struct node * search_and_insert(struct node *);
struct node * delete_node_val(struct node *);
int main(){
    start = create_ll(start);
    display(start);
    search_and_insert(start);

    display(start);
    delete_node_val(start);
    display(start);
}
struct node * create_ll(struct node * start){
    struct node * new_node, *ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\n Enter the data:");
    scanf("%d", &num);
    while (num!=-1){
        new_node = (struct node * )malloc(sizeof(struct node));
        new_node -> data = num;
        if (start == NULL){
            start = new_node;
            new_node->next = NULL;
        }
        else{
            ptr = start;
            while (ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next = new_node;
            new_node->next=NULL;
        }
        printf("\n Enter the data:");
        scanf("%d",&num);
    }
    return start;
}
struct node * display(struct node * start)
{
    struct node * ptr;
    ptr = start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
//operation number 3
//insertion of the node at the beginning of the linked list
struct node * insert_beg(struct node * head){
    printf("Enter the data for node:");
    int num;
    scanf("%d",&num);
    struct node * ptr = head;
    struct node * new_node = (struct node * )malloc(sizeof(struct node));
    new_node -> data = num;
    new_node ->next = head;
    head = new_node;
}
struct node * insert__end(struct node * head){
    printf("Enter the data for node:");
    int num;
    scanf("%d",&num);
    struct node * ptr = head;
    struct node * new_node = (struct node * )malloc(sizeof(struct node));
        new_node -> data = num;
        if (start == NULL){
            start = new_node;
            new_node->next = NULL;
        }
        else{
            ptr = start;
            while (ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next = new_node;
            new_node->next=NULL;
        }
}
struct node * delete_node_val(struct node * head){
    printf("Enter val to delete:");
    int num;
    scanf("%d",&num);
    struct node * ptr = head;
    while(ptr->next->data!=num && ptr!=NULL)
    ptr=ptr->next;
    if (ptr == head){
        struct node * temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    else {
        struct node * temp = ptr->next;
        ptr ->next = ptr->next->next;
        free(temp);
    }

}
struct node * search_and_insert(struct node * head){
    printf("Enter the data after which value is to be added:");
    int val;
    scanf("%d",&val);
    printf("Enter the data for node:");
    int num;
    scanf("%d",&num);
    struct node * ptr = head;
    struct node * new_node = (struct node * )malloc(sizeof(struct node));
    new_node -> data = num;
    while(ptr->data!=val && ptr!=NULL)
    ptr = ptr->next;
    if (ptr==head){
        new_node->next = head;
        head = new_node;
        return head;
    }
    else if (ptr->next == NULL){
        ptr->next = new_node;
        new_node->next = NULL;
    }
    else{
        struct node * temp = ptr->next;
        ptr->next = new_node;
        new_node->next =  temp;
    }
}
// 4th operation
/// insertion at end


// create new_node malloc
// input data for new_node
// new_node->data = inputdata
// traverse if ptr->next!=NULL
// ptr->next = new_node
// new_node->NULL


//write a program to insert a node after a given value
