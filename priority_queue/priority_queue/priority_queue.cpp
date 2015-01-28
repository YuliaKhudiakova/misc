//
//  priority_queue.cpp
//  priority_queue
//
//  Created by Yulia Khudiakova on 28.01.15.
//  Copyright (c) 2015 Yulia Khudiakova. All rights reserved.
//

#include "priority_queue.h"

template<typename T>
void TPriorityQueue<T>::Insert(const T& key) {
    Pq.push_back(key);
    BubbleUp(Pq.size() - 1);
}

template<typename T>
const T& TPriorityQueue<T>::GetMin() const {
    return Pq[1];
}

template<typename T>
void TPriorityQueue<T>::DeleteMin() {
    if (IsEmpty())
        return;
    
    std::swap(Pq[1], Pq.back());
    BubbleDown(1);
    Pq.pop_back();
}

template<typename T>
bool TPriorityQueue<T>::IsEmpty() const {
    return Pq.size() == 1;
}

template<typename T>
size_t TPriorityQueue<T>::GetSize() const {
    return Pq.size() - 1;
}

template<typename T>
void TPriorityQueue<T>::BubbleUp(size_t index) {
    
}

template<typename T>
void TPriorityQueue<T>::BubbleDown(size_t index) {
    size_t size = Pq.size();
    
//    size_t child = 2 * index;
//    while (child < size) {
//        if (Pq[index] > Pq[child]) {
//            std::swap(Pq[index], Pq[child]);
//            index = child;
//            child = 2 * index;
//        } else if (child + 1 < size && Pq[index] > Pq[child + 1]) {
//            std::swap(Pq[index], Pq[child + 1]);
//            index = child + 1;
//            child = 2 * index;
//        } else {
//            break;
//        }
//    }
    
    while (2 * index < size) {
        size_t child = 2 * index;
        if (child + 1 < size && Pq[child] > Pq[child + 1])
            ++child;
            
        if (Pq[index] < Pq[2 * index]) {
            std::swap(Pq[index], Pq[2 * index]);
            index *= 2;
        } else if ()
            ++child;
    }
}


