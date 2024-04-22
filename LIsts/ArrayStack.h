//
// Created by Tony on 21.04.2024.
//

#ifndef DATA_STRUCTURES_ARRAYSTACK_H
#define DATA_STRUCTURES_ARRAYSTACK_H
#define MAX_SIZE 5
#include <iostream>
using namespace std;

template<typename T>
class ArrayStack {
    int top;
public:
    T arr[MAX_SIZE]; // Maximum size of Stack


    bool push(T data) {
        if (top >= (MAX_SIZE - 1)) {
            cout << "Stack Overflow";
            return false;
        }
        else {
            arr[++top] = data;
            return true;
        }
    }

    T pop() {
        if (top < 0) {
            cout << "Stack Underflow";
            return T();
        }
        else {
            T data = arr[top--];
            return data;
        }
    }

    T peek() {
        if (top < 0) {
            cout << "Stack is Empty";
            return T();
        }
        else {
            T data = arr[top];
            return data;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
    friend ostream &operator<<(ostream &os, ArrayStack<T> &obj) {
        if(obj.isEmpty()){
            os << "Stack is Empty";
        }
        else{
            for(int i=obj.top; i>=0;i--){
                os <<" | " <<  obj.arr[i];
                os<<" | ";
            }
            os << endl;
        }
        return os;
    }
    int getSize(){
        return top+1;
    }
    bool isFull(){
        if(top == MAX_SIZE-1){
            return true;
        }
        return false;
    }
    ArrayStack():top{-1}{};
    ArrayStack(T data):top{0} {arr[top]=data;};
    ~ArrayStack(){};
};
#endif //DATA_STRUCTURES_ARRAYSTACK_H
