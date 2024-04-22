#include <iostream>
#include "LIsts/DoubleLinkedList.h"
#include "LIsts/SingleLinkedList.h"
#include "LIsts/Queue.h"
#include "LIsts/Stack.h"
#include "LIsts/InputRestrictedQueue.h"
#include "LIsts/ArrayQueue.h"
#include "LIsts/ArrayStack.h"
void exampleSList(){
    try {
            DoubleLinkedList<int> list;
            cout << "Add 4 items to the beginning of list: " << endl;
            list.AddAtBeginning(5);
            list.AddAtBeginning(6);
            list.AddAtBeginning(7);
            list.AddAtBeginning(8);
            cout << list<< endl;

            cout << "Add 2 items to the end of the list: " << endl;
            list.AddToEnd(9);
            list.AddToEnd(10);
            cout << list << endl;

            cout << "Check if the list is empty or not: "<< endl;
            cout <<list.IsEmpty()<<endl;

            cout << "Get the size of list: "<<list.getSize()<< endl;

            cout << "Add an item '20' by index 3" << endl;
            list.addByIndex(3,20);
            cout << list << endl;

            cout << "Delete by index 4: " << endl;
            list.deleteByIndex(4);
            cout << list<<endl;

            cout << "Delete an item from the beginning: " << endl;
            list.deleteFromBeginning();
            cout << list << endl;

            cout << "Delete an item from the end: " << endl;
            list.deleteFromEnd();
            cout << list << endl;

            cout << "Search an item 20:";
            cout << list.search(20) << endl;

            cout << "Check by index 2: ";
            cout << list.operator[](2) << endl;

            cout << list<< endl;
    }
    catch (const out_of_range &str){
        cerr << str.what() << endl;
    }
}
void exampleDList(){
    try{
        DoubleLinkedList<int> list;
        cout << "Add 4 items to the beginning of list: " << endl;
        list.AddAtBeginning(5);
        list.AddAtBeginning(6);
        list.AddAtBeginning(7);
        list.AddAtBeginning(8);
        cout << list<< endl;

        cout << "Add 2 items to the end of the list: " << endl;
        list.AddToEnd(9);
        list.AddToEnd(10);
        cout << list << endl;

        cout << "Check if the list is empty or not: "<< endl;
        cout <<list.IsEmpty()<<endl;

        cout << "Get the size of list: "<<list.getSize()<< endl;

        cout << "Add an item '20' by index 3" << endl;
        list.addByIndex(3,20);
        cout << list << endl;

        cout << "Delete by index 4: " << endl;
        list.deleteByIndex(4);
        cout << list<<endl;

        cout << "Delete an item from the beginning: " << endl;
        list.deleteFromBeginning();
        cout << list << endl;

        cout << "Delete an item from the end: " << endl;
        list.deleteFromEnd();
        cout << list << endl;

        cout << "Search an item 20:";
        cout << list.search(20) << endl;

        cout << "Check by index 2: ";
        cout << list.operator[](2) << endl;

        cout << list<< endl;
    }
    catch (const out_of_range &str){
        cerr<<str.what()<<endl;
    }

};
void queueExample(){
    try {
        Queue<int> queue;
        cout << "Added 5 items to queue: "<<endl;
        queue.enqueue(1);
        queue.enqueue(2);
        queue.enqueue(3);
        queue.enqueue(4);
        queue.enqueue(5);
        cout << queue << endl;
        cout << "deleted 3 items from queue: "<< endl;
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
void ArrayQueueExample(){
    ArrayQueue<float> a;
    try {
        cout << "is empty: " << a.isEmpty() << endl;

        cout << "is full: " << a.isFull() << endl;

        cout << "Enqueue:" << endl;
        a.enqueue(4.3);
        a.enqueue(7.6);
        a.enqueue(12.8);
        a.display();
        cout << endl;
        cout << "Size: " << a.getSize() << endl;

        cout << "Dequeue: " << endl;
        a.dequeue();
        a.display();
        cout << endl;

        cout << "Peek: " << a.peek() << endl;
        a.display();

        cout << "Size: " << a.getSize() << endl;

        cout << "is empty: " << a.isEmpty() << endl;

        cout << "Dequeue: " << endl;
        a.dequeue();
        a.display();
        cout << endl;
        cout << "Size: " << a.getSize() << endl;
        cout << "Dequeue: " << endl;
        a.dequeue();
        a.display();


        cout << "Enqueue: " << endl;
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        a.enqueue(1);
        cout << "Size: " << a.getSize() << endl;
        a.display();
        cout << endl;

        cout << "is full: " << a.isFull() << endl;
    } catch (runtime_error &e){
        cerr << e.what() << endl;
    }
}
void exampleIRQ(){
    InputRestrictedQueue<int> irq;
    try{
        InputRestrictedQueue<int> a;
        cout<<"Add 5 items to queue"<<endl;
        a.Enqueue(5);
        a.Enqueue(7);
        a.Enqueue(3);
        a.Enqueue(1);
        a.Enqueue(32);

        cout<<a<<endl;

        cout<<"Delete one item: "<<a.Dequeue()<<a<<endl;
        cout<<"Delete from fnd: "<<a.DeleteFromEnd()<<a<<endl;

        cout<<"Peek: "<<a.Peek()<<a<<endl;
        cout<<"Peek from end: "<<a.PeekFromEnd()<<a<<endl;

        cout<<"Size is : "<<a.getSize()<<endl;

        cout<<"Check if the queue is empty: "<<a.IsEmpty()<<endl;

        cout<<"Delete from end: "<<a.DeleteFromEnd()<<a<<endl;
        cout<<"Delete from end: "<<a.DeleteFromEnd()<<a<<endl;
        cout<<"Delete from end: "<<a.DeleteFromEnd()<<a<<endl;
    }
    catch (const runtime_error &e){
        cerr<<e.what()<<endl;
    }
}
void exampleArrayStack(){
    ArrayStack<int> arrayStack;
    cout << "Add 4 items to stack: " << endl;
    arrayStack.push(1);
    arrayStack.push(2);
    arrayStack.push(3);
    arrayStack.push(4);
    cout << arrayStack << endl;
    cout << "Size of stack: " << arrayStack.getSize()<< endl;
    cout << "Add 1 item to stack: ";
    arrayStack.push(5);
    cout << arrayStack;
    cout << "Check if the array is full: ";
    cout << arrayStack.isFull() << endl;
    cout << "Peek an item: ";
    cout << arrayStack.peek()<< endl;
    cout << "Pop an item: ";
    arrayStack.pop();
    cout << arrayStack <<endl;
    cout << "Check if the stack is empty: ";
    cout << arrayStack.isEmpty() << endl;
    cout << "Pop 8 items and check if the stack is empty: ";
    cout << arrayStack.pop() <<endl;
    cout << arrayStack.pop() <<endl;
    cout << arrayStack.pop() <<endl;
    cout << arrayStack.pop() <<endl;
    cout << "empty ?: ";
    cout << arrayStack.isEmpty() << endl;

}
int main() {
//    exampleSList();
//    exampleDList();
//    queueExample();
//    stackExample();
//    ArrayQueueExample();
//    exampleIRQ();
//    exampleArrayStack();

    return 0;
}
