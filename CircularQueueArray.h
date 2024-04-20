
#ifndef DATA_STRUCTURES_CIRCULARQUEUEARRAY_H
#define DATA_STRUCTURES_CIRCULARQUEUEARRAY_H
#include <iostream>
using namespace std;
template <typename T>
class CircularQueueArray{
    T *elements;
    int front;
    int back;
    int capacity;
    int currentSize;
public:
    CircularQueueArray():capacity(10),front(-1),back(-1),currentSize(0){
        elements = new T[capacity];
    }

    ~CircularQueueArray(){
        delete[] elements;
    }

    bool isEmpty(){
        if(currentSize == 0)
            return true;
        else return false;
    }
    bool isFull(){
        return currentSize == capacity;
    }

    void enqueue(T obj){
        if (isEmpty()){
            front = back = 0;
        }else{
            back = (back + 1) % capacity;
        }
        elements[back] = obj;
        currentSize++;
    }

    T dequeue(){
        if (isEmpty()){
            throw std::underflow_error("Queue is empty!!!");
        }
        T removedElement = elements[front];
        if (front == back){
            front = back = -1;
        }else{
            front = (front + 1) % capacity;
        }
        currentSize--;
        return removedElement;
    }

    T peek() {
        if (isEmpty()) {
            throw std::out_of_range("Queue is empty!!!");
        }
        return elements[front];
    }

    friend std::ostream& operator<<(std::ostream& os, CircularQueueArray<T>& queue) {
        if (queue.isEmpty()) {
            os << "Queue is empty!!!";
        } else {
            int i = queue.front;
            while (true) {
                os << queue.elements[i] << " ";
                if (i == queue.back) {
                    break;
                }
                i = (i + 1) % queue.capacity;
            }
        }
        return os<<endl;
    }
};
#endif
