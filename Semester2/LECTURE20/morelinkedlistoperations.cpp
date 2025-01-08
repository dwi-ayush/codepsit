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
struct node * display ( struct node *);
struct node * insertionofanodebeforeparticularnode(struct node *);
struct node * insertionofanodeafterparticularnode(struct node *);
struct node * delatbeg(struct node *);
struct node * delatend(struct node *);
struct node * delbefore(struct node *);
struct node * middleofLL(struct node *);
int main(){
    start = create_ll(start);
    display(start);
    insertionofanodebeforeparticularnode(start);
    display(start);
    insertionofanodeafterparticularnode(start);
    display(start);
    start = delatbeg(start);
    printf("after deleting beg\n");
    display(start);
    delatend(start);
    printf("after deleting end\n");
    display(start);
}
struct node * middleofLL(struct node * head){
    // struct node * ptr = head;
    // int count=0;
    // while(ptr!=NULL){
    //     ptr=ptr->next;
    //     count++;
    // }
    // count/=2;
    // int i=0;
    // ptr=head;
    // while(i<=count){
    //     ptr=ptr->next;
    //     i++;
    // }
    // printf("");
    // can be done using slow pointer and fast pointer
    struct node * ptr = head;
    struct node * slowptr = head;
    while(ptr->next->next != NULL){
        ptr = ptr->next->next;
        slowptr = slowptr->next;
    }
    printf("mid is ",slowptr->data);
}
struct node * sort_list(struct node * start){
    struct node * ptr1,*ptr2;
    int temp;
    ptr1= start;
    while(ptr1->next != NULL)
    {
        ptr2= ptr1->next;
        while(ptr2!=NULL){
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
        }
    }
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
//5th operation
struct node * insertionofanodebeforeparticularnode(struct node * head){
    struct node * ptr = head;
    int key,data;
    printf("Enter key to add before:");
    scanf("%d",&key);
    printf("Enter data for node to be added:");
    scanf("%d",&data);
    while (ptr->next->data != key){
        ptr = ptr->next;
    }
    struct node * newnode = (struct node * )malloc(sizeof(struct node ));
    newnode->data=data;
    struct node * temp = ptr->next;
    ptr->next = newnode;
    newnode->next=temp;
    return head;
}
//6th opertion, insertion of a node after a particular node
struct node * insertionofanodeafterparticularnode(struct node * head){
    struct node * ptr = head;
    int key,data;
    printf("Enter key to add after:");
    scanf("%d",&key);
    printf("Enter data for node to be added:");
    scanf("%d",&data);
    while (ptr->data != key){
        ptr = ptr->next;
    }
    struct node * newnode = (struct node * )malloc(sizeof(struct node ));
    newnode->data=data;
    struct node * temp = ptr->next;
    ptr->next = newnode;
    newnode->next=temp;
    return head;
}

//7th operation, deletion of a node at the beginning of the linked list

struct node * delatbeg(struct node * head){
    struct node * newhead = head->next;
    free(head);
    return newhead;
}

//8th deletion at end
struct node * delatend(struct node * head){
    struct node * ptr = head;
    struct node * preptr = NULL;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr= ptr->next;
    }
    free(ptr);
    preptr->next = NULL;
    return head;
}
//9th deletion before a particular node 
struct node * delbefore(struct node * head){
    struct node * ptr = head;
    int key;
    printf("Enter key to add before:");
    scanf("%d",&key);
    while (ptr->next->data != key){
        ptr = ptr->next;
    }
    struct node * temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
}