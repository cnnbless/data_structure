#include <iostream>
#include "LIsts/DoubleLinkedList.h"
#include "LIsts/SingleLinkedList.h"
#include "LIsts/Queue.h"
#include "LIsts/Stack.h"
//void exampleSList(){
//    try {
//            DoubleLinkedList<int> list;
//            cout << "Add 4 items to the beginning of list: " << endl;
//            list.AddAtBeginning(5);
//            list.AddAtBeginning(6);
//            list.AddAtBeginning(7);
//            list.AddAtBeginning(8);
//            cout << list<< endl;
//
//            cout << "Add 2 items to the end of the list: " << endl;
//            list.AddToEnd(9);
//            list.AddToEnd(10);
//            cout << list << endl;
//
//            cout << "Check if the list is empty or not: "<< endl;
//            cout <<list.IsEmpty()<<endl;
//
//            cout << "Get the size of list: "<<list.getSize()<< endl;
//
//            cout << "Add an item '20' by index 3" << endl;
//            list.addByIndex(3,20);
//            cout << list << endl;
//
//            cout << "Delete by index 4: " << endl;
//            list.deleteByIndex(4);
//            cout << list<<endl;
//
//            cout << "Delete an item from the beginning: " << endl;
//            list.deleteFromBeginning();
//            cout << list << endl;
//
//            cout << "Delete an item from the end: " << endl;
//            list.deleteFromEnd();
//            cout << list << endl;
//
//            cout << "Search an item 20:";
//            cout << list.search(20) << endl;
//
//            cout << "Check by index 2: ";
//            cout << list.operator[](2) << endl;
//
//            cout << list<< endl;
//    }
//    catch (const out_of_range &str){
//        cerr << str.what() << endl;
//    }
//}
//void exampleDList(){
//    try{
//        DoubleLinkedList<int> list;
//        cout << "Add 4 items to the beginning of list: " << endl;
//        list.AddAtBeginning(5);
//        list.AddAtBeginning(6);
//        list.AddAtBeginning(7);
//        list.AddAtBeginning(8);
//        cout << list<< endl;
//
//        cout << "Add 2 items to the end of the list: " << endl;
//        list.AddToEnd(9);
//        list.AddToEnd(10);
//        cout << list << endl;
//
//        cout << "Check if the list is empty or not: "<< endl;
//        cout <<list.IsEmpty()<<endl;
//
//        cout << "Get the size of list: "<<list.getSize()<< endl;
//
//        cout << "Add an item '20' by index 3" << endl;
//        list.addByIndex(3,20);
//        cout << list << endl;
//
//        cout << "Delete by index 4: " << endl;
//        list.deleteByIndex(4);
//        cout << list<<endl;
//
//        cout << "Delete an item from the beginning: " << endl;
//        list.deleteFromBeginning();
//        cout << list << endl;
//
//        cout << "Delete an item from the end: " << endl;
//        list.deleteFromEnd();
//        cout << list << endl;
//
//        cout << "Search an item 20:";
//        cout << list.search(20) << endl;
//
//        cout << "Check by index 2: ";
//        cout << list.operator[](2) << endl;
//
//        cout << list<< endl;
//    }
//    catch (const out_of_range &str){
//        cerr<<str.what()<<endl;
//    }
//
//};
void queueExample(){
    try {
        Queue<int> queue;
        cout << "Added 5 items to queue: ";
        queue.enqueue(1);
        queue.enqueue(2);
        queue.enqueue(3);
        queue.enqueue(4);
        queue.enqueue(5);
        cout << queue << endl;
        cout << "deleted 3 items from queue: ";
        queue.dequeue();
        queue.dequeue();
        queue.dequeue();
        cout << queue << endl;
        cout << "Print first item: ";
        cout << queue.peek() << endl << endl;
        cout << "Check if the queue is empty: ";
        cout << queue.IsEmpty() << endl << endl;
        cout << "Print size of queue: ";
        cout << queue.getSize() << endl << endl;
        cout<<"Dequeue: "<<queue.dequeue()<< endl<<queue<<endl;
        cout<<"Dequeue: "<<queue.dequeue()<< endl<<queue<<endl;
        queue.dequeue();
    } catch (runtime_error &e){
        cerr << e.what() <<endl;
    }
}
void stackExample(){
    try {
        Stack<int> stack;
        cout << "Add three items to stack: " << endl;
        stack.push(1);
        stack.push(2);
        stack.push(3);
        cout << stack<< endl;
        cout << "Delete first item: ";
        stack.pop();
        cout << stack << endl;
        cout << "Print first item: ";
        cout << stack.peek() << endl;
        cout << "Size of stack: ";
        cout << stack.getSize() << endl;
        cout << "Check if stack is empty: ";
        cout << stack.IsEmpty() << endl;
    } catch (runtime_error &e){
        cerr << e.what()<< endl;
    }
}

int main() {
//    exampleSList();
//    exampleDList();
//    queueExample();
//    stackExample();


    return 0;
}
