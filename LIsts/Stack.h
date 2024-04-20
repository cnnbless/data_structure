//
// Created by Tony on 20.04.2024.
//

#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H
#include "../node/StackNode.h"
#include <iostream>

using namespace std;
using namespace StackNode;

template<typename T>
class Stack {
private:
    unique_ptr<stackNode<T>> head;
    int size;
public:
    void push(T data){
       unique_ptr<stackNode<T>> newNode = make_unique<stackNode<T>>(data);
       newNode->next = move(head);
       head = move(newNode);
       size++;
    }
    T pop(){
        if(!head){
            throw runtime_error("Stack is empty");
        }

        T temp = head->data;
        head = move(head->next);
        --size;
        return temp;
    }
    T peek(){
        if(!head){
            throw runtime_error("Stack is empty");
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
    friend ostream &operator<<(ostream &os, Stack &obj){
        stackNode<T> *current = obj.head.get();
        os << "Stack data: " << endl;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next.get();
        }
        os << endl;
        return os;
    }

    Stack() : head{nullptr}, size{0} {};
    Stack(int value) : head{make_unique<stackNode<T>>(value)}, size{1} {};

    ~Stack(){};
};
#endif //DATA_STRUCTURES_STACK_H
