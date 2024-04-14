#ifndef DATA_STRUCTURES_SINGLYLINKEDLIST_H
#define DATA_STRUCTURES_SINGLYLINKEDLIST_H
#include "SingleNode.h"
#include <iostream>
using namespace std;
using namespace single_node;
template <typename T>
class SinglyLinkedList {
private:
    unique_ptr<Node<T>> head;
    int size;
    void checkIndex(T index) const{
        if (index < 0 || index >= size ){
            throw out_of_range("Index out of range");
        }
    };
public:
    SinglyLinkedList(): head(nullptr),size{0} {};
    SinglyLinkedList(T value): head{make_unique<Node>(value)}, size {1} {};

    void insertAtBeginning (T value){
        unique_ptr<Node<T>> newNode = make_unique<Node<T>>(value);
        newNode->next = std::move(head);
        head = std::move(newNode);
        size++;
    };

    void insetrAtEnd(T value){

            unique_ptr<Node<T>> newNode = make_unique<Node<T>>(value);
            Node<T> *current = head.get();
            if (!current) {
                head = std::move(newNode);
                size++;
                return;
            }

        while(current->next){
            current = current->next.get();
        }
        current->next = std::move(newNode);
        size++;
}
    void insertAtIndex(T index, T value){checkIndex(index);

        if(index == 0 ){
            insertAtBeginning(value);
            return;
        }
        else if (index== size){
            insertAtBeginning(value);
            return;
        }
        else{
            unique_ptr<Node<T>> newNode = make_unique<Node<T>>(value);
            Node<T> *current = head.get();
            for (int i = 0; i < index - 1; i++) {
                current = current->next.get();
            }
            newNode->next = std::move(current->next);
            current->next = std::move(newNode);
            size++;
        }};
    T operator[](T index)const{ checkIndex(index);
        Node<T> *current= head.get();
        for (int i=0;i < index; i++ ){
            current = current->next.get();
        }
        return current->data;
    };
    void removeFromBeginning(){
        if (!head){
            throw std::out_of_range("List is empty");
        }
        head = std::move(head->next);
        --size;
    };
    void removeFromEnd(){
        if(!head){
            throw std::out_of_range("List is empty");
        }
        if(size ==1 ){
            head.reset();
            --size;
            return;
        }
        Node<T> *current = head.get();
        while (current->next->next){
            current = current->next.get();
        }
        current->next.reset();
        --size;
    };
    void RemoveAtIndex (T index){
        checkIndex(index);
        if(index == 0 ){
            removeFromBeginning();
            return;
        }
        else if ( index == size -1 ){
            removeFromEnd();
            return;
        }
        Node<T> *current = head.get();
        for( int i=0; i< index - 1;i ++){
            current = current -> next.get();
        }
        current->next = std:: move(current->next->next);
        --size;
    };
    bool search (T value) const{
        Node<T>*current = head.get();
        while(current){
            if(current->data == value){
                return true;
            }
            current = current -> next.get();
        }
        return false;
    };
    T getSize() const{
        return  size;
    };
    friend ostream &operator<<(ostream &os, SinglyLinkedList<T> &obj) {
        Node<T> *current = obj.head.get();
        os << "List data: " <<endl;
        while (current != nullptr) {
            os << current->data << " ";
            current = current->next.get();

        }
        return os;
    }
//    bool isCircularList() {
//        if(!head){
//            return false;
//        }
//        Node<T>* slow = head.get();
//        Node<T>* fast = head.get();
//        while(fast && fast->next){
//            slow = slow->next.get();
//            fast= fast ->next->next.get();
//            if( slow == fast ){
//                return true;
//            }
//        }
//        return false;
//    };

};


#endif
