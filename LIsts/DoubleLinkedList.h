//
// Created by Tony on 09.04.2024.
//

#ifndef DATA_STRUCTURES_DOUBLELINKEDLIST_H
#define DATA_STRUCTURES_DOUBLELINKEDLIST_H
#include "../node/DoubleNode.h"
#include <ostream>
#include <memory>
using namespace std;
using namespace double_node;
template <typename T>
class DoubleLinkedList {
private:
    shared_ptr<Node<T>> head;
    shared_ptr<Node<T>> tail;
    int size;

    void checkIndex(int index) const {
        if (index < 0 or index >= size) {
            throw out_of_range("Index out of range");
        }
    }
public:
    DoubleLinkedList() : head{nullptr}, tail{nullptr}, size{0} {};
    DoubleLinkedList(T data) : head{make_shared<Node<T>>(data)}, tail{head}, size{1} {};

    void AddAtBeginning(T data){

            shared_ptr<Node<T>> newNode = make_shared<Node<T>>(data);
            if (!head) {
                head = tail = newNode;
            } else {
                newNode->next = head;
                head->previous = newNode;
                head = newNode;
            }
            size++;
    }


    void AddToEnd(T data) {
        shared_ptr<Node<T>> newNode = make_shared<Node<T>>(data);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
        size++;
    }


    int operator[](int index) const {
        checkIndex(index);
        shared_ptr<Node<T>> current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        return current->data;
    }


    bool search(T data) const {
        shared_ptr<Node<T>> current = head;
        while (current) {
            if (current->data == data) {
                return true;
            }
            current = current->next;
        }
        return false;
    }


    void addByIndex(int index, T data) {
        checkIndex(index);

        if (index == 0) {
            AddAtBeginning(data);
        }
        if (index == size) {
            AddToEnd(data);
        }
        shared_ptr<Node<T>> newNode = make_shared<Node<T>>(data);
        shared_ptr<Node<T>> current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        newNode->previous = current;
        current->next->previous = newNode;
        current->next = newNode;
        ++size;
    }


    void deleteFromBeginning() {
        if (!head) {
            return;
        }
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->previous.reset();
        }
        --size;
    }


    void deleteFromEnd() {
        if (!tail) {
            return;
        }
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->previous.lock();
            tail->next = nullptr;
        }
        --size;
    }
    void deleteByIndex(int index) {
        checkIndex(index);
        if (index == 0) {
            head = head->next;
            if (head) {
                head->previous.reset();
            } else {
                tail.reset();
            }
        } else if (index == size - 1) {
            tail = tail->previous.lock();
            tail->next.reset();
        } else {
            shared_ptr<Node<T>> current = head;
            for (int i = 0; i < index; i++) {
                current = current->next;
            }
            current->previous.lock()->next = current->next;
            current->next->previous = current->previous;
        }
        --size;
    }
    friend ostream &operator<<(ostream &os, DoubleLinkedList &obj) {
        os << "List data: " << endl;
        shared_ptr<Node<T>> current = obj.head;
        while (current) {
            os << current->data << " ";
            current = current->next;
        }
        os << endl;
        return os;
    }

    int getSize() const {
        return size;
    }

    bool IsEmpty(){
        if(size == 0){
            return true;
        }
        return false;
    }


};


#endif //DATA_STRUCTURES_DOUBLELINKEDLIST_H
