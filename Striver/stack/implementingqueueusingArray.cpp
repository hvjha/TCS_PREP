#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue(int s){
        size = s;
        arr = new int[s];
        front = -1;
        rear = -1;
    }

    void enqueue(int x){
        if(rear == size - 1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(front == -1){
            front = 0;
        }
            rear++;
            arr[rear] = x;
            cout<<x<<" enqueued to Queue"<<endl;
    }

    void dequeue(){
       if(front == -1 || front > rear){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else{
            cout<<arr[front]<<" dequeued from Queue"<<endl;
            front++;
        }
    }

    void peek(){
        if(front == -1 || front > rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Front element is: "<<arr[front]<<endl;
        }
    }

    bool isEmpty(){
        return front == -1 || front > rear;
    }
};

int main(){
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    q.dequeue();
    q.dequeue();

    q.peek();
}

