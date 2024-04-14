#include <iostream>
#include "SingleNode.h"
#include "SinglyLinkedList.h"

using namespace std;

void singlylist(){

    SinglyLinkedList<int> list;
    cout<<"Inserting 3 items at end"<<endl;
    list.insetrAtEnd(1);
    list.insetrAtEnd(2);
    list.insetrAtEnd(3);
    cout<<list<<endl;

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
   // cout << "Is list circular: " << list.isCircularList() << endl;
}


int main() {

    singlylist();

    return 0;
}
