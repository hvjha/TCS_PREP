#include<bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;

public:
    Stack(int s){
        size = s;
        arr = new int[s];
        top = -1;
    }

    void push(int x){
        if(top == size - 1){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top++;
            arr[top] = x;
            cout<<x<<" pushed to Stack"<<endl;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            cout<<arr[top]<<" popped from Stack"<<endl;
            top--;
        }
    }

    void peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Top element is: "<<arr[top]<<endl;
        }
    }

    bool isEmpty(){
        return top == -1;
    }
}; 

int main(){
    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    s.peek();

    s.pop();
    s.peek();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}