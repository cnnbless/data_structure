#include <iostream>
#include "LIsts/DoubleLinkedList.h"
#include "LIsts/SingleLinkedList.h"
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
int main() {
//    exampleSList();
//    exampleDList();


    return 0;
}
