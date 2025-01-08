#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
}
typedef struct node * Node;
Node createLinkedList(int size){
    Node localhead = NULL;
    Node current = NULL;

    if (size>0){
        localhead = (Node)malloc(sizeof(node));
        if (localhead == NULL){
            return NULL;
        }
        int counter=0;
        current=localhead;
        while(size!=counter){
            counter++;
        }
        return localhead;
    }
    else {
        return NULL;
    }
}
int main(){

}
