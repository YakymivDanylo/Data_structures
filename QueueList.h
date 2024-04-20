#ifndef DATA_STRUCTURES_QUEUELIST_H
#define DATA_STRUCTURES_QUEUELIST_H
#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;
template <typename T>
class QueueList{
    SinglyLinkedList<T> list;
    size_t size;
public:
    QueueList()= default;
    QueueList(const QueueList &other )= default;
    QueueList( QueueList &&other )= default;
    ~QueueList() = default;
    QueueList &operator=(const QueueList &other) = default;
    QueueList &operator=(QueueList &&other) noexcept = default;

    bool isEmpty() const {
        return list.getSize() == 0;
    }

    bool isFull()const{
        return list.getSize() == size;
    }
    void enqueue ( const T &obj){
        list.insetrAtEnd(obj);
    }

    T dequeue(){
        if (isEmpty()){
            throw underflow_error("Queue is empty!!!");
        }
        T frontObj = list[0];
        list.removeFromBeginning();
        return frontObj;
    }
    T peek()const{
        if(isEmpty()){
            throw out_of_range("Queue is empty!!!");
        }
        return list[0];
    }

    friend std::ostream& operator<<(ostream &os, QueueList <T> &queue) {
        os << queue.list;
        return os;
    }

};


#endif
