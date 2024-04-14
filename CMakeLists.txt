cmake_minimum_required(VERSION 3.27)
project(Data_structures)

set(CMAKE_CXX_STANDARD 23)

add_executable(Data_structures main.cpp
        SinglyLinkedList.cpp
        SinglyLinkedList.h
        SingleNode.h)
