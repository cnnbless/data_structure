//
// Created by Tony on 20.04.2024.
//

#ifndef DATA_STRUCTURES_STACKNODE_H
#define DATA_STRUCTURES_STACKNODE_H
#include <memory>
namespace StackNode{
    template <typename T>
    struct stackNode{
        T data;
        std::unique_ptr<stackNode<T>> next;

        stackNode(T data) : data{data}, next(nullptr) {}

    };
}
#endif //DATA_STRUCTURES_STACKNODE_H
