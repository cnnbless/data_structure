cmake_minimum_required(VERSION 3.26)
project(data_structures)

set(CMAKE_CXX_STANDARD 23)

add_executable(data_structures main.cpp
        LIsts/DoubleLinkedList.h
        node/DoubleNode.h
        node/SingleNode.h
        LIsts/SingleLinkedList.h
        LIsts/Queue.h
        node/QueueNode.h
        LIsts/Stack.h
        node/StackNode.h)
