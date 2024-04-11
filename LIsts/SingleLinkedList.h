//
// Created by Tony on 11.04.2024.
//

#ifndef DATA_STRUCTURES_SINGLELINKEDLIST_H
#define DATA_STRUCTURES_SINGLELINKEDLIST_H
#include "../node/SingleNode.h"
#include <memory>
using namespace single_node;
using namespace std;
template <typename T>


class SingleLinkedList {
private:
    unique_ptr<SNode<T>> head;
    int size;
    void checkIndex(int index) const {
        if (index < 0 or index >= size) {
            throw out_of_range("Index out of range");
        }
    }


public:
    SingleLinkedList():head{nullptr},size{0}{};
    SingleLinkedList(T data): head{make_unique<SNode<T>>(data)}, size{1}{};
    void AddToBeginning(T data) {
        unique_ptr<SNode<T>> newNode = make_unique<SNode<T>>(data);
        newNode->next = std::move(head);
        head = std::move(newNode);
        size++;
    }

    void AddToEnd(T data) {
        unique_ptr<SNode<T>> newNode = make_unique<SNode<T>>(data);
        SNode<T> *current = head.get();
        if (!current) {
            head = move(newNode);
            size++;
            return;
        }
        while (current->next) {
            current = current->next.get();
        }
        current->next = move(newNode);
        size++;
    }
    void AddByIndex(int index, T data) {
        checkIndex(index);

        if (index == 0) {
            AddToBeginning(data);
            return;
        } else if (index == size) {
            AddToEnd(data);
            return;
        } else {
            unique_ptr<SNode<T>> newNode = make_unique<SNode<T>>(data);
            SNode<T> *current = head.get();
            for (int i = 0; i < index - 1; i++) {
                current = current->next.get();
            }
            newNode->next = move(current->next);
            current->next = move(newNode);
            size++;
        }
    }
    bool isEmpty(){
        if (size == 0){
            return true;
        }
        return false;
    }
    int getSize(){
        return size;
    }
    void deleteFromBeginning() {
        if (!head) {
            throw std::out_of_range("List is empty!");
        }
        head = std::move(head->next);
        --size;
    }
    void deleteFromEnd(){
            if (!head) {
                throw std::out_of_range("List is empty!");
            }
            if (size == 1) {
                head.reset();
                --size;
                return;
            }
            SNode<T> *current = head.get();
            while (current->next->next) {
                current = current->next.get();
            }
            current->next.reset();
            --size;
    }
    void deleteByIndex(int index){

            checkIndex(index);
            if (index == 0) {
                deleteFromBeginning();
                return;
            } else if (index == size - 1) {
                deleteFromEnd();
                return;
            }

            SNode<T> *current = head.get();
            for (int i = 0; i < index - 1; i++) {
                current = current->next.get();
            }
            current->next = std::move(current->next->next);
            --size;
    }
    bool lookFor(T data) const {
        SNode<T> *current = head.get();
        while (current) {
            if (current->data == data) {
                return true;
            }
            current = current->next.get();
        }
        return false;
    }

    int operator[](int index) const {
        checkIndex(index);
        SNode<T> *current = head.get();
        for (int i = 0; i < index; i++) {
            current = current->next.get();
        }
        return current->data;
    }
    friend ostream &operator<<(ostream &os, SingleLinkedList &obj) {
        SNode<T> *current = obj.head.get();
        os << "List data: " << endl;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next.get();
        }
        os << endl;
        return os;
    }


};


#endif //DATA_STRUCTURES_SINGLELINKEDLIST_H
