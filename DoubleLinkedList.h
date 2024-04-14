
#ifndef DATA_STRUCTURES_DOUBLELINKEDLIST_H
#define DATA_STRUCTURES_DOUBLELINKEDLIST_H
#include "DoubleNode.h"
#include <ostream>
using namespace std;

template<typename T>
class DoubleLinkedList{
    shared_ptr<DoubleNode<T>> head;
    shared_ptr<DoubleNode<T>> tail;
    int size;
    void checkIndex(int index) const {
        if (index < 0 || index >= size) {
            throw out_of_range("Failed to access element. Index out of range!");
        }
    }
public:
    DoubleLinkedList() : head{nullptr}, tail{nullptr}, size{0} {};
    DoubleLinkedList(T obj) : head{make_shared<DoubleNode<T>>(obj)}, tail{head}, size{1} {};

    void insertAtBeginning(T obj){
        shared_ptr<DoubleNode<T>> newNode = make_shared<DoubleNode<T>>(obj);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->previous = newNode;
            head = newNode;
        }
        ++size;
    };

    void insertAtEnd(T obj){
        shared_ptr<DoubleNode<T>> newNode = make_shared<DoubleNode<T>>(obj);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
        ++size;
    };

    void insertAtIndex(int index, T obj){
        checkIndex(index);
        if (index == 0) {
            T insertAtBeginning(obj);
        }
        if (index == size) {
            T insertAtEnd(obj);
        }
        shared_ptr<DoubleNode<T>> newNode = make_shared<DoubleNode<T>>(obj);
        shared_ptr<DoubleNode<T>> current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        newNode->previous = current;
        current->next->previous = newNode;
        current->next = newNode;
        ++size;
    };

    int operator[](int index) const{
        checkIndex(index);
        shared_ptr<DoubleNode<T>> current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    };

    void removeFromBeginning(){
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
    };

    void removeFromEnd(){
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
    };

    void removeAtIndex(int index){
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
            shared_ptr<DoubleNode<T>> current = head;
            for (int i = 0; i < index; i++) {
                current = current->next;
            }
            current->previous.lock()->next = current->next;
            current->next->previous = current->previous;
        }
        --size;
    };
    bool search(T obj) const{
        shared_ptr<DoubleNode<T>> current = head;
        while (current) {
            if (current->data == obj) {
                return true;
            }
            current = current->next;
        }
        return false;
    };

    int getSize() const{
        return size;
    };

    friend ostream &operator<<(ostream &os, DoubleLinkedList &obj){
        shared_ptr<DoubleNode<T>> current = obj.head;
        while (current) {
            os << current->data << " ";
            current = current->next;
        }
        os << endl;
        return os;
    };
    bool isEmpty()const{
        if(!head)
            return true;
        else
            return false;
    }


};
#endif
