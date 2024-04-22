#include <iostream>
#include "SinglyLinkedList.h"
#include "DoubleLinkedList.h"
#include "CircularQueueList.h"
#include "CircularQueueArray.h"
#include "QueueList.h"
#include "QueueArray.h"
#include "StackList.h"
#include "StackArray.h"

using namespace std;

void Shtrix(){
    cout<<"------------------------\n";
}

void SingleList (){
    SinglyLinkedList <int> A;
    Shtrix();
    if(A.isEmpty())
        cout<<"List is empty"<<endl;
    Shtrix();
    A.insertAtBeginning(3);
    A.insertAtBeginning(2);
    A.insertAtBeginning(1);


    if(!A.isEmpty())
        cout<<"List isn`t empty"<<endl;
    cout<<A;
    Shtrix();
    A.insetrAtEnd(6);
    A.insetrAtEnd(5);
    A.insetrAtEnd(4);

    cout<<A;
    Shtrix();

    A.removeFromEnd();
    A.removeFromBeginning();
    cout<<A;
    Shtrix();

    A.RemoveAtIndex(1);
    A.insertAtIndex(1,5);
    cout<<A;
    Shtrix();


    if (A.search(2))
        cout<<"List has 2"<<endl;
    else cout<<"List don`t have 2"<<endl;
    cout<<"Size of list: "<<A.getSize()<<endl;
    cout<<A[3]-A[2]<<endl;
}

void DoubleList(){
    DoubleLinkedList <int> B;
    Shtrix();
    if(B.isEmpty())
        cout<<"List is empty"<<endl;
    Shtrix();
    B.insertAtBeginning(3);
    B.insertAtBeginning(2);
    B.insertAtBeginning(1);


    if(!B.isEmpty())
        cout<<"List isn`t empty"<<endl;
    cout<<B;
    Shtrix();
    B.insertAtEnd(6);
    B.insertAtEnd(5);
    B.insertAtEnd(7);

    cout<<B;
    Shtrix();

    B.removeFromEnd();
    B.removeFromBeginning();
    cout<<B;
    Shtrix();

    B.removeAtIndex(1);
    B.insertAtIndex(1,5);
    cout<<B;
    Shtrix();


    if (B.search(2))
        cout<<"List has 2"<<endl;
    else cout<<"List don`t have 2"<<endl;
    cout<<"Size of list: "<<B.getSize()<<endl;
    cout<<B[3]-B[2]<<endl;
}

void CircularQueueListEx(){
    CircularQueueList<int> A;
    Shtrix();
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    Shtrix();
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A;
    Shtrix();
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    Shtrix();
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    Shtrix();
    cout<<A;
    Shtrix();
    cout<<"First element in queue: "<<A.peek()<<endl;
    Shtrix();
}

void CircularQueueArrayEx(){
    CircularQueueArray <int> A;
    Shtrix();
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    Shtrix();
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A;
    Shtrix();
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    Shtrix();
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    Shtrix();
    cout<<A;
    Shtrix();
    cout<<"First element in queue: "<<A.peek()<<endl;
    Shtrix();

}

void QueueListEx(){
    QueueList <int> A;
    Shtrix();
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    Shtrix();
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A;
    Shtrix();
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    Shtrix();
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    Shtrix();
    cout<<A;
    Shtrix();
    cout<<"First element in queue: "<<A.peek()<<endl;
    Shtrix();
}

void QueueArrayEx(){
    QueueArray<int>A;
    Shtrix();
    if (A.isEmpty())
        cout<<"Queue is empty"<<endl;
    Shtrix();
    A.enqueue(1);
    A.enqueue(0);
    A.enqueue(2);
    cout<<A;
    Shtrix();
    if (A.isFull())
        cout<<"Queue is full"<<endl;
    else cout<<"Queue isn`t full"<<endl;
    Shtrix();
    cout<<"Dequeued element: "<<A.dequeue()<<endl;
    Shtrix();
    cout<<A;
    Shtrix();
    cout<<"First element in queue: "<<A.peek()<<endl;
    Shtrix();

}

void StackListEx(){
    StackList <int> A;
    Shtrix();
    if (A.isEmpty())
        cout<<"Stack is empty"<<endl;
    Shtrix();
    A.push(1);
    A.push(0);
    A.push(2);
    cout<<A;
    Shtrix();
    cout<<"Poped element: "<<A.pop()<<endl;
    Shtrix();
    cout<<A;
    Shtrix();
    cout<<"First element in stack: "<<A.peek()<<endl;
    Shtrix();

}

void StackArrayEx(){
    StackArray<int>A;
    Shtrix();
    if (A.isEmpty())
        cout<<"Stack is empty"<<endl;
    Shtrix();
    A.push(1);
    A.push(0);
    A.push(2);
    cout<<A;
    Shtrix();
    cout<<"Poped element: "<<A.pop()<<endl;
    Shtrix();
    cout<<A;
    Shtrix();
    cout<<"First element in stack: "<<A.peek()<<endl;
    Shtrix();

}

int main() {

//    SingleList();

//    DoubleList();

CircularQueueListEx();

//CircularQueueArrayEx();

//QueueListEx();

//QueueArrayEx();

//StackListEx();

//    StackArrayEx();

}
