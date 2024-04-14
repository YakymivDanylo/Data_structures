//#include "SinglyLinkedList.h"
//#include <iostream>
//template <typename T>
//void SinglyLinkedList<T>::checkIndex(T index) const {
//    if (index < 0 || index >= size ){
//        throw out_of_range("Index out of range");
//    }
//}
//template <typename T>
//void SinglyLinkedList<T>::insertAtBeginning (T value){
//    unique_ptr<Node<T>> newNode = make_unique<Node>(value);
//    newNode->next= std::move(head);
//    head = std::move(newNode);
//    size++;
//}
//
//template <typename T>
//void SinglyLinkedList<T>::insetrAtEnd(T value){
//    unique_ptr<Node<T>> newNode = make_unique<Node>(value);
//    Node<T> *current = head.get();
//    if (!current){
//        head = std::move(newNode);
//        size ++;
//        return;
//    }
//    while(current->next){
//        current = current->next.get();
//    }
//    current->next = std::move(newNode);
//    size++;
//}
//
//template <typename T>
//ostream &operator<<(ostream &os, SinglyLinkedList<T> &obj){
//    Node<T> *current = obj.head.get();
//    os << "List data: "<<endl;
//    while(current != nullptr){
//        os<< current->data<<" ";
//        current = current->next.get();
//    }
//
//    os<<endl;
//    return os;
//}
//
//template <typename T>
//void SinglyLinkedList<T>::insertAtIndex(T index, T value) {
//    checkIndex(index);
//
//    if(index == 0 ){
//        insertAtBeginning(value);
//        return;
//    }
//    else if (index== size){
//        insertAtBeginning(value);
//        return;
//    }
//    else{
//        unique_ptr<Node<T>> newNode = make_unique<Node<T>>(value);
//        Node<T> *current = head.get();
//        for (int i = 0; i < index - 1; i++) {
//            current = current->next.get();
//        }
//        newNode->next = std::move(current->next);
//        current->next = std::move(newNode);
//        size++;
//    }
//}
//template <typename T>
//T SinglyLinkedList<T>::operator[](T index) const{
//    checkIndex(index);
//    Node<T> *current= head.get();
//    for (int i=0;i < index; i++ ){
//        current = current->next.get();
//    }
//    return current->data;
//}
//
//template <typename T>
//void SinglyLinkedList<T>::removeFromBeginning() {
//    if (!head){
//        throw std::out_of_range("List is empty");
//    }
//    head = std::move(head->next);
//    --size;
//}
//
//template <typename T>
//void SinglyLinkedList<T>::removeFromEnd() {
//    if(!head){
//        throw std::out_of_range("List is empty");
//    }
//    if(size ==1 ){
//        head.reset();
//        --size;
//        return;
//    }
//    Node<T> *current = head.get();
//    while (current->next->next){
//        current = current->next.get();
//    }
//    current->next.reset();
//    --size;
//}
//
//template <typename T>
//void SinglyLinkedList<T>::RemoveAtIndex(T index) {
//    checkIndex(index);
//    if(index == 0 ){
//        removeFromBeginning();
//        return;
//    }
//    else if ( index == size -1 ){
//        removeFromEnd();
//        return;
//    }
//    Node<T> *current = head.get();
//    for( int i=0; i< index - 1;i ++){
//        current = current -> next.get();
//    }
//    current->next = std:: move(current->next->next);
//    --size;
//}
//
//template <typename T>
//bool SinglyLinkedList<T>::search(T value) const {
//    Node<T>*current = head.get();
//    while(current){
//        if(current->data == value){
//            return true;
//        }
//        current = current -> next.get();
//    }
//    return false;
//}
//
//template <typename T>
//T SinglyLinkedList<T>::getSize() const {
//    return  size;
//}
//
//template <typename T>
//bool SinglyLinkedList<T>::isCircularList() {
//    if(!head){
//        return false;
//    }
//    Node<T>* slow = head.get();
//    Node<T>* fast = head.get();
//    while(fast && fast->next){
//        slow = slow->next.get();
//        fast= fast ->next->next.get();
//        if( slow == fast ){
//            return true;
//        }
//    }
//    return false;
//}
//
