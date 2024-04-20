#include <iostream>
#include "SingleNode.h"
#include "SinglyLinkedList.h"
#include "DoubleNode.h"
#include "DoubleLinkedList.h"
#include "QueueArray.h"
#include "QueueList.h"
#include "StackList.h"
#include "CircularQueueArray.h"
#include "CircularQueueList.h"


using namespace std;

void singlylist(){
    cout<<"Singly linked list: "<<endl;
    SinglyLinkedList<int> list;
    if(list.isEmpty())
        cout<<"List is empty"<<endl;
    cout<<"Inserting 3 items at end"<<endl;
    list.insetrAtEnd(1);
    list.insetrAtEnd(2);
    list.insetrAtEnd(3);
    cout<<list<<endl;

    if(!list.isEmpty())
        cout<<"List isn`t empty"<<endl;

    cout << "Inserting 4 items at beginning " << endl;
    list.insertAtBeginning(0);
    list.insertAtBeginning(-1);
    list.insertAtBeginning(-2);
    list.insertAtBeginning(-3);
    cout << list << endl;

    cout << "Removing from end: " << endl;
    list.removeFromEnd();
    cout << list << endl;

    cout << "Removing from beginning: " << endl;
    list.removeFromBeginning();
    cout << list << endl;

    cout << "Inserting at index 4 value 23" << endl;
    list.insertAtIndex(4, 23);
    cout << list << endl;

    cout << "Removing at index 2 " << endl;
    list.RemoveAtIndex(2);
    cout << list << endl;

    cout << "Item at position 3: " << list[3] << endl;
    cout << "Does value 23 exist? " << list.search(23) << endl;
    cout << "Size of list: " << list.getSize() << endl;
}

void doublelist(){
    cout<<"Double linked list: "<<endl;
    DoubleLinkedList <int> list;
    if(list.isEmpty())
        cout<<"List is empty"<<endl;
    cout << "Inserting 3 items at beginning " << endl;
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);
    cout<<list<<endl;

    if(!list.isEmpty())
        cout<<"List isn`t empty"<<endl;
    cout << "Inserting 3 items at end " << endl;
    list.insertAtEnd(6);
    list.insertAtEnd(5);
    list.insertAtEnd(7);
    cout<<list<<endl;

    cout << "Removing from end and beginning: " << endl;
    list.removeFromEnd();
    list.removeFromBeginning();
    cout<<list<<endl;
    cout << "Removing at index 1 " << endl;
    list.removeAtIndex(1);
    cout << "Inserting at index 1 value 5" << endl;
    list.insertAtIndex(1,5);
    cout<<list<<endl;

    cout << "Item at position 3: " << list[3] << endl;
    cout << "Does value 23 exist? " << list.search(23) << endl;
    cout << "Size of list: " << list.getSize() << endl;


}
void CircularQueueListEx(){
    CircularQueueList<int> A;
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A;
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    cout<<A<<endl;
    cout<<"First element in queue: "<<A.peek()<<endl;

}

void CircularQueueArrayEx(){
    CircularQueueArray <int> A;
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A;
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    cout<<A<<endl;
    cout<<"First element in queue: "<<A.peek()<<endl;

}

void QueueListEx(){
    QueueList <int> A;
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A;
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    cout<<A<<endl;
    cout<<"First element in queue: "<<A.peek()<<endl;
}

void QueueArrayEx(){
    QueueArray<int>A;
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A<<endl;
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    cout<<A<<endl;
    cout<<"First element in queue: "<<A.peek()<<endl;

}

void StackListEx(){
    StackList <int> A;
    if (A.isEmpty())
        cout<<"Stack is empty"<<endl;
    A.push(1);
    A.push(0);
    A.push(2);
    cout<<A<<endl;
    cout<<"Poped element: "<<A.pop()<<endl;
    cout<<A<<endl;
    cout<<"First element in stack: "<<A.peek()<<endl;

}

int main() {

//    singlylist();
//    doublelist();
//CircularQueueListEx();
//CircularQueueArrayEx();
//QueueListEx();
//QueueArrayEx();
//StackListEx();
    return 0;
}
