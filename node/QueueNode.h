//
// Created by Tony on 20.04.2024.
//

#ifndef DATA_STRUCTURES_QUEUENODE_H
#define DATA_STRUCTURES_QUEUENODE_H
#include <memory>
namespace queueNode {
    template<typename T>
    struct QueueNode {
        T data;
        std::shared_ptr<QueueNode<T>> next;
        std::weak_ptr<QueueNode<T>> previous;

        QueueNode(T data) : data{data} {}
    };
}
#endif //DATA_STRUCTURES_QUEUENODE_H
