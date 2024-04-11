//
// Created by Tony on 11.04.2024.
//

#ifndef DATA_STRUCTURES_SINGLENODE_H
#define DATA_STRUCTURES_SINGLENODE_H
#include <memory>

namespace single_node{
    template <typename T>
    struct SNode{
        T data;
        std::unique_ptr<SNode<T>> next;

        SNode(T data) : data{data}, next(nullptr) {}

    };
}

#endif //DATA_STRUCTURES_SINGLENODE_H
