cmake_minimum_required(VERSION 3.26)
project(data_structures)

set(CMAKE_CXX_STANDARD 23)

add_executable(data_structures main.cpp
        LIsts/DoubleLinkedList.cpp
        LIsts/DoubleLinkedList.h
        node/DoubleNode.cpp
        node/DoubleNode.h
        node/SingleNode.cpp
        node/SingleNode.h
        LIsts/SingleLinkedList.cpp
        LIsts/SingleLinkedList.h)
