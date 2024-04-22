//
// Created by Tony on 21.04.2024.
//

#ifndef DATA_STRUCTURES_ARRAYQUEUE_H
#define DATA_STRUCTURES_ARRAYQUEUE_H
#define MAX_SIZE 10

#include <iostream>
using namespace std;
template<typename T>
class ArrayQueue {
private:
    int front;
    int rear;
    T arr[MAX_SIZE];
public:
    bool isFull() {
        if(front == 0 and rear == MAX_SIZE-1){
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        return false;
    }

    void enqueue(T data) {
        if (isFull()) {
            throw runtime_error("Queue is Full");
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = data;
    }

    void dequeue() {
        if (isEmpty()) {
            throw runtime_error("Queue is Empty");
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }

    T peek() {
        if (isEmpty()) {
            throw runtime_error("Queue is Empty");
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            throw runtime_error("Queue is Empty");
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << " | " << arr[i] << " | ";
        }
        cout << endl;

    }
    int getSize(){
        if (isEmpty()) {
            return 0;
        }
        return rear - front + 1;
    }
    ArrayQueue(): front{-1}, rear{-1}{};
    ArrayQueue(T data):front{0},rear{0} {arr[front]=data;};
    ~ArrayQueue(){};
};

#endif //DATA_STRUCTURES_ARRAYQUEUE_H
