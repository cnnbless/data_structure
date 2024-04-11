//
// Created by Tony on 09.04.2024.
//

#ifndef DATA_STRUCTURES_DOUBLENODE_H
#define DATA_STRUCTURES_DOUBLENODE_H
#include <memory>

namespace double_node {
    template<typename T>
    struct Node {
        T data;
        std::shared_ptr<Node<T>> next;
        std::weak_ptr<Node<T>> previous;

        Node(T data) : data(data) {}
    };
}



#endif //DATA_STRUCTURES_DOUBLENODE_H
