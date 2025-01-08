#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * next;
};

int main(){
    printf("Enter the number of elements in linked list:");
    int n;
    scanf("%d",&n);
    if (n>0){
        struct node * head = NULL;
        struct node * current = NULL;
        for (int i=1;i<=n;i++){
            struct node * newnode = (struct node *)malloc(sizeof(struct node));
            newnode->next=NULL;
            printf("Enter the value for node[%d]:",i);
            scanf("%d",&newnode->data);

            if (head == NULL){
                head = newnode;
                current = head;
            }
            else{
                current->next=newnode;
                current=current->next;
            }
        }
        current=head;
        int counter=0;
        while(current!=NULL){

            counter++;
            printf("%p Node[%d]:%d -> %p\n",&current->data,counter,current->data,current->next);
            current=current->next;

        }

        printf("Enter the node that you want to delete:");
        int ntd;
        scanf("%d",&ntd);
        if (ntd<n && ntd>1){
            counter=1;
            current=head;
            while(counter!=ntd-1 && current!=NULL){
                counter++;
                current=current->next;
            }
            struct node * temp = current->next;
            current->next=current->next->next;
            free(temp);
        }
        else if (ntd==n){
            counter=1;
            current=head;
            while(counter!=ntd-1 && current!=NULL){
                counter++;
                current=current->next;
            }
            struct node * temp = current->next;
            current->next=NULL;
        }
        else if (ntd == 1){
            struct node * temp = head;
            head = head->next;
            free(temp);

        }


        current=head;
        counter=0;
        while(current!=NULL){

            counter++;
            printf("%p Node[%d]:%d -> %p\n",&current->data,counter,current->data,current->next);
            current=current->next;

        }





    }
    else{
        printf("linked list can only have positive non-zero number of elements!");
    }
    return 0;
}