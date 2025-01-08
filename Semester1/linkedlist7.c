#include <stdio.h>
struct node{
    int data;
    struct node * next;
};

int main(){
    // ek node banaye
    struct node node1;
    struct node node2;
    struct node node3;
    // printf("%d %p\n",node1.data, node1.next);
    // printf("%d %p\n",node2.data, node2.next);
    // printf("%d %p\n",node3.data, node3.next);

    // initialize with data
    node1.data=1;
    node2.data=2;
    node3.data=3;
    printf("before linking \n");
    printf("%p %d %p\n",&node1,node1.data, node1.next);
    printf("%p %d %p\n",&node2,node2.data, node2.next);
    printf("%p %d %p\n",&node3,node3.data, node3.next);

    // linking the linked list

    node1.next=&node2;
    node2.next=&node3;
    node3.next=NULL;
    printf("after linking \n");
    printf("%p %d %p\n",&node1,node1.data, node1.next);
    printf("%p %d %p\n",&node2,node2.data, node2.next);
    printf("%p %d %p\n",&node3,node3.data, node3.next);

    struct node * head;
    head = &node1;

    struct node * current;
    current=head;

    printf("the linked list is: ");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
    struct node node4;
    node4.data=4;
    node4.next=&node1;
    head=&node4;
    printf("\n%p %d %p\n",&node4,node4.data, node4.next);
    current=head;
    printf("the linked list is: ");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }
    node1.next=&node3;
    current=head;
    printf("\nthe linked list is: ");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->next;
    }

}