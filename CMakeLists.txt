cmake_minimum_required(VERSION 3.26)
project(data_structures)

set(CMAKE_CXX_STANDARD 23)

add_executable(data_structures main.cpp
        LIsts/DoubleLinkedList.h
        node/DoubleNode.h
        node/SingleNode.h
        LIsts/SingleLinkedList.h
        LIsts/Queue.cpp
        LIsts/Queue.h
        LIsts/Queue.h
        LIsts/Queue.cpp
        node/QueueNode.h
        LIsts/Stack.cpp
        LIsts/Stack.h
        node/StackNode.h)
