#include <stdio.h>
#include <stdlib.h>
struct node{ // self referencial data structure
    int data;
    struct node * next;
};
struct node * start = NULL;
struct node * create(struct node *);
int main(){
    start = create(start);
}
void printLL(struct node * head){
    
}
struct node * create(struct node * start){
    struct node * newnode, * ptr;
    int num;
    printf("Enter the data");
    scanf("%d",&num);
    while (num!=-1){
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=num;
        if (start==NULL)
        {
            newnode->next=NULL;
            start=newnode;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newnode;
            newnode->next=NULL;
        }
        printf("Enter the data:");
        scanf("%d",&num);
    }
    return start;
}
