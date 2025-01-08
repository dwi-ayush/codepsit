#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
};
struct node * start = NULL;
struct node * create();
struct node * display();

int main()
{
    // start = create(start);
    // start = display(start);
    int c;
    int flag=1;
    while(flag){ 
        
        printf("Enter case:");
        scanf("%d",&c);
        switch (c){
        case 1:
            start = create();
            break;
        case 2:
            display(start);
            break;
        case 3:
            flag=0;
            break;
        default:
            printf("Invalid");
    }
    }
    
}


struct node * create()
{
    struct node *newnode, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data:");
    scanf("%d",&num);
    while(num!=-1)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = num;
            newnode -> next = NULL;

        if(start==NULL)
        {
            start = newnode;
        }
        else
        {
            ptr = start;
            while(ptr->next!=NULL) //
            {
                ptr = ptr->next ;
            }
            ptr->next = newnode;
        }
        printf("\n Enter the data:");
            scanf("%d",&num);
    }
    newnode->next = start;  //KEY LINE THIS IS BACK
    return start;
}
struct node * display ()
{
    // printf("hello");
    struct node *ptr;
    ptr = start;
    printf("%d ",ptr->data);
    ptr = ptr->next;
    while(ptr!=start)
    {
        
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    return start;
}

//debug LOG:
//  keyline should've been newnode->next = start and not ptr->next = start
//  the approach was tweaked, first a normal linked list is created and the last element, which is newnode is pointed to start and start is returned
//  use of flag instead of GOTO in main()
//  remove parameters of both the fucntions, because start is declared globally, so no need for passing the value of start node ptr
//  the enter new data was placed inside the else block of the while loop in create function, so it was moved outside the else block
//  