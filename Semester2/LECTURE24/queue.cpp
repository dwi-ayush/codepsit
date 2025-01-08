// normal and circularQueue 
// CIRCULAR QUEUE IS THE BEST
// NOT ONLY IS IT MEMORY EFFICIENT, BUT BECAUSE IT CAN BE IMPLEMENTED USING ARRAYS, THE ACCESS IS SUPER QUICK, but the same can be said if implemented using linked list
//Armaan Soni
#include <iostream>
#include <climits>
using namespace std;
class CircularQueue{
    private:
        int rear,front,size,capacity;
        int * arr;
    public:
        int getFront(){
            if (size)
            return arr[front];
            else{
                return INT_MIN;
            }
        }
        int getRear(){
            if (size)
            return arr[rear];
            else{
                return INT_MIN;
            }
        }
        bool isEmpty(){
            return !size;
        }
        CircularQueue(int n){
            rear = front = -1;
            size = 0;
            capacity=n;
            arr = new int[n];
        }
        int getSize(){
            return size;
        }
        int getCapacity(){
            return capacity;
        }
        void enQueue(int x) {
            if (size == capacity) {
                cout << "Can't Perform EnQueue, the queue is already full" << endl;
                return;
            }

            if (front == -1) {
                front = 0;  
            }

            rear = (rear + 1) % capacity;  
            arr[rear] = x;  
            size++;  
        }

        int deQueue() {
            if (isEmpty()) {
                cout << "Queue is empty, can't perform DeQueue" << endl;
                return INT_MIN;
            }

            int value = arr[front];  
            front = (front + 1) % capacity;  
            size--;  
            return value;  
        }

        void display() {
            if (isEmpty()) {
                cout << "Queue is empty" << endl;
                return;
            }

            cout << "Queue: ";
            for (int i = 0; i < size; i++) {
                int index = (front + i) % capacity;  
                cout << arr[index] << " ";
            }
            cout << endl;
        }
        void arrDisplay(){
            for (int i=0;i<capacity;i++){
                cout<<arr[i]<<" ";
            }
        }
};
class Queue{
    private:
        int rear,front,size,capacity;
        int * arr;
    public:
        int getFront(){
            if (size)
            return arr[front];
            else{
                return INT_MIN;
            }
        }
        int getRear(){
            if (size)
            return arr[rear];
            else{
                return INT_MIN;
            }
        }
        bool isEmpty(){
            return !size;
        }
        Queue(int n);
	void enQueue(int n);
	int deQueue();
    void display();
    int getSize(){
        return size;
    }
    int getCapacity(){
        return capacity;
    }

};
Queue :: Queue(int n){
    rear = front = -1;
    size = 0;
    capacity=n;
    arr = new int[n];
}
void Queue :: enQueue(int n){
	if (rear == front && rear == -1){
        rear ++;
        front ++;
        size++;
        arr[rear] = n;
    }
    else if (rear == capacity-1) {
        cout<<"Queue reached maximum size!, no enQueue performed"<<endl;
    }
    else{
        rear++;
        size++;
        arr[rear]=n;
    }
}
void Queue :: display(){
    cout<<"\nQueue: ";
    if (rear==-1){
        cout<<endl;
        return ;
    }
    for (int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int Queue :: deQueue(){
    size--;
    return arr[front++];
}
int main(){
    // Queue myQ(6);
    // // cout<< myQ.getFront();
    // myQ.enQueue(4);
    // myQ.enQueue(3);
    // myQ.enQueue(2);
    // myQ.enQueue(234);
    // myQ.enQueue(2);
    // myQ.enQueue(2983);
    // cout<<"rear:"<< myQ.getRear()<<endl;
    // cout<<"front:"<<myQ.getFront();
    // myQ.display();
    // cout<< "is empty:";
    // myQ.isEmpty()?(cout<<" yes"):(cout<<" no");
    // cout<<endl;
    // cout<< "size:"<<myQ.getSize()<<endl;
    // cout<< "capacity:"<<myQ.getCapacity()<<endl<<endl;
    // cout<<"dequeuing value:"<<myQ.deQueue()<<endl;
    // myQ.display();
    // cout<< "size:"<<myQ.getSize()<<endl;
    // cout<< "capacity:"<<myQ.getCapacity()<<endl<<endl;;
    // cout<<"dequeuing value:"<<myQ.deQueue()<<endl;
    // myQ.display();
    // cout<< "size:"<<myQ.getSize()<<endl;
    // cout<< "capacity:"<<myQ.getCapacity()<<endl;
    // myQ.enQueue(234);
    // myQ.display();
    // cout<< "size:"<<myQ.getSize()<<endl;
    // cout<< "capacity:"<<myQ.getCapacity()<<endl;

    CircularQueue mcq(5);
    mcq.enQueue(3);
    mcq.enQueue(5);
    mcq.deQueue();
    mcq.enQueue(23);
    mcq.enQueue(235);
    mcq.enQueue(98);
    
    mcq.enQueue(27);mcq.enQueue(27);


    mcq.display();
    mcq.arrDisplay();

    return 0;
}
