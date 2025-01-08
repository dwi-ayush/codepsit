#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * newnode(){
    struct node * nn= (struct node *)malloc(sizeof(struct node));
    return nn;
}
int main(){
    int size;
    printf("Enter the size of the linked list that you want to create:");
    scanf("%d",&size);
    if (size>0){
        struct node * head = newnode();
        printf("Enter the data for node[1]:");
        scanf("%d",&head->data);
        head->next=NULL;
        struct node * curnode=head;
        for (int i=2;i<=size;i++){
            curnode->next=newnode();
            curnode=curnode->next;
            printf("Enter the data for node[%d]:",i);
            scanf("%d",&curnode->data);
        }
        curnode->next=NULL;

        curnode=head;
        int counter=1;

        // deleting elements:
        printf("Enter node number to delete:");
        int nodedel;
        scanf("%d",nodedel);
        while(counter!=nodedel-1){
            curnode=curnode->next;
            counter++;
        }
        curnode->next=curnode->next->next;
        curnode=head;
        counter=1;
        // printing linked list elements
        while(1){
            printf("data at node[%d]:%d\n",counter,curnode->data);
            counter++;
            
            curnode=curnode->next;
            if (curnode->next==NULL){
                printf("data at node[%d]:%d\n",counter,curnode->data);
                break;
            }
        }


    }
    else{
        printf("size of linked list can only be a positive non-zero number!");
    }
    return 0;
}