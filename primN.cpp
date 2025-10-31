#include<iostream>
using namespace std;
class Prime{
    public:
    void pn(int n){
        if(n<=1){
            cout<<n;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"Not Prime";
                break;
            }
            if(n%i!=0){
                cout<<"Prime";
                break;
            }
            
            
        }
        
    }
};
int main(){
    Prime p;
    p.pn(17);
    return 0;
}



#include <stdio.h>
#define MAX 5   // Maximum size of queue

int queue[MAX];
int front = -1;
int rear = -1;

// Function to insert element (Enqueue)
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d\n", value);
    } else {
        if (front == -1)
            front = 0; // first element
        rear++;
        queue[rear] = value;
        printf("%d inserted into queue.\n", value);
    }
}

// Function to delete element (Dequeue)
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! No elements to delete.\n");
    } else {
        printf("%d deleted from queue.\n", queue[front]);
        front++;
    }
}

// Function to display elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty.\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    enqueue(50);
    display();
    enqueue(60);  // will show overflow
    return 0;
}
