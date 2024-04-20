//
// Created by Tony on 20.04.2024.
//

#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H
#include "DoubleLinkedList.h"
#include "../node/QueueNode.h"
#include <iostream>
using namespace std;
using namespace queueNode;

template<typename T>
class Queue {
private:
    shared_ptr<QueueNode <T>> head;
    shared_ptr<QueueNode <T>> tail;
    int size;
public:
    void enqueue(T data) {
        shared_ptr<QueueNode<T>> newNode = make_shared<QueueNode<T>>(data);
        if (!tail) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
        size++;
    }
    T dequeue(){
        if(!head){
            throw runtime_error("Queue is empty");
        }
        T temp = head->data;

        if(head==tail){
            head = tail = nullptr;
        }
        else {
            head = head->next;
            head->previous.reset();
        }
        size--;
        return temp;
    }
    T peek() {
        if (!head) {
            throw runtime_error("Queue is empty");
        }
        return head->data;
    }

    bool IsEmpty(){
        if(size==0){
            return true;
        }
        return false;
    }

    int getSize() const {
        return size;
    }

    friend ostream &operator<<(ostream &os, Queue<T> &obj) {
        os << "Queue data: " << endl;
        shared_ptr<QueueNode<T>> current = obj.head;
        while (current) {
            os << current->data << " ";
            current = current->next;
        }
        os << endl;
        return os;
    }
    Queue(): head{nullptr}, tail{nullptr}, size{0} {};
    Queue(T data) : head{make_shared<QueueNode<T>>(data)}, tail{head}, size{1} {};
    ~Queue() {};

};
#endif //DATA_STRUCTURES_QUEUE_H
