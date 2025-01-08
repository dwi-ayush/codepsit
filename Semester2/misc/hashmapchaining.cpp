#include <iostream>
using namespace std;
#define BUCKET_SIZE 10
struct Node{
    int key;
    struct Node * next;
};
struct hashMap{
    struct Node * table[BUCKET_SIZE];
};
void initHashTable(struct hashMap * ht){
    for (int i=0 ; i<BUCKET_SIZE;i++){
        ht->table[i]=NULL;
    }
}
int hashfunc(int val){
    return val%BUCKET_SIZE;
}
void insert(struct hashMap * ht, int key){
    int index= hashfunc(key);
    struct Node * newNode;
    newNode = new Node;
    newNode->key=key;
    newNode->next=ht->table[index];
    ht->table[index]=newNode;
}
void printHashTable(struct hashMap * ht){
    for (int i=0;i<BUCKET_SIZE;i++){
        struct Node * current = ht->table[i];
        while(current!=NULL){
            cout<<current->key<<" ";
            current=current->next;
        }
        cout<<"NULL\n";
    }
}
int main(){
    struct hashMap ht;
    initHashTable(&ht);
    insert(&ht,1);
    insert(&ht,11);
    insert(&ht,21);
    printHashTable(&ht);
    return 0;
}