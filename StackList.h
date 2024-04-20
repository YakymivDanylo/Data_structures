
#ifndef DATA_STRUCTURES_STACKLIST_H
#define DATA_STRUCTURES_STACKLIST_H
#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;
template <typename T>
class StackList {
    DoubleLinkedList<T> list;
public:
    StackList() : list() {}

    bool isEmpty(){
        return list.isEmpty();
    }

    T peek()const{
        if (list.isEmpty()){
            throw std::out_of_range("Stack is empty!!!");
        }
        return list[Size() -1];
    }

    void push(const T &obj){
        list.insertAtEnd(obj);
    }

    T pop(){
        if (isEmpty()){
            throw std::underflow_error("Stack is empty");
        }
        T obj = list[Size() - 1 ];
        list.removeFromEnd();
        return obj;
    }

    int Size() const{
        return list.getSize();
    }

    friend std::ostream& operator<<(std::ostream& os, StackList<T>& stack) {
        os << stack.list;
        return os;
    }
};
#endif
